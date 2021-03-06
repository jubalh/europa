set(PLANNER Solver)
set(DEFAULT_PCONFIG "DefaultPlannerConfig.xml")
set(exec_plan runProblem_${PLANNER}${EUROPA_SUFFIX})
set(module_deps System NDDL Solvers Resource RulesEngine TemporalNetwork PlanDatabase ConstraintEngine Utils TinyXml)
add_executable(${exec_plan} runProblem.cc)
add_common_module_deps(${exec_plan} "${module_deps}")
add_custom_target(common-tests)
# set(checkin_tests basic-types)
set(checkin_tests basic-types constrain-transaction foreach-transaction force-object-distribution gnats_3161 rejection)
set(resource_tests  better-res
  better-res-reservoir #need to re-write the constraints so that they produce positive consumption values
  k9.backtrack.moderate-transaction
  k9.backtrack.moderate-transaction-reservoir
  resource-backtrack-test
  resource-backtrack-test-reservoir
  #Rover-transaction
  Rover-transaction-reservoir)

set(system_tests backtrack-test
  merge-with-open-domain
  basic-model-transaction 
  DynamicObjTest
  gnats_2572_interval-tx 
  gnats_2837-tx 
  k9-initial 
  k9-transaction 
  monkey1monkey-transaction
  path-filter-transaction 
  rules.0.tx 
  subtype-extension.tx)

  
function(run_planner_problem model configFile dep)
  set(is_nddl FALSE)
  string(REGEX MATCH ".nddl^" is_nddl ${model})
  if(NOT is_nddl)
    set(model "${model}.nddl")
  endif(NOT is_nddl)

  set(test_target run-nddl-interp-${model})
  add_test(NAME ${test_target}
    COMMAND ${exec_plan} ${model} ${configFile} nddl)
  #add_dependencies(${dep} ${test_target})
endfunction(run_planner_problem)

foreach(test ${checkin_tests})
  run_planner_problem(${test} ${DEFAULT_PCONFIG} common-tests)
endforeach(test)
foreach(test ${resource_tests})
  run_planner_problem(${test} ${DEFAULT_PCONFIG} common-tests)
endforeach(test)
foreach(test ${system_tests})
  run_planner_problem(${test} ${DEFAULT_PCONFIG} common-tests)
endforeach(test)
run_planner_problem(HTX.1 HTX.1.solverConfig.xml nddl)
#TODO: find out why this doesn't get run in the Jamfile
#run_planner_problem(HTX.2 HTX.2.solverConfig.xml nddl) 
run_planner_problem(HTX.3 HTX.3.solverConfig.xml nddl)
run_planner_problem(reusable-test-transaction ReusableTestConfig.xml nddl)
run_planner_problem(unary-resource-test-transaction ReusableTestConfig.xml nddl)
run_planner_problem(Mini-crew-init.nddl MiniCrewSolverConfig.xml nddl)


file(GLOB models *.nddl)
file(COPY ${models} DESTINATION .)
file(GLOB configs *.xml)
file(COPY ${configs} DESTINATION .)