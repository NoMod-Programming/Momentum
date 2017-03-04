#include "PlaceGearLeft.h"
#include "Commands/LeftAutonomousTurn1.h"
#include "Commands/LeftAutonomousTurn2.h"
#include "Commands/MoveBackwardUsingEncoder1.h"
#include "Commands/MoveBackwardUsingEncoder2.h"
#include "Commands/VisionTracking.h"

PlaceGearLeft::PlaceGearLeft() {

	//Order of Operations:
	//All of this is backwards because bot is placed backwards on the field (gear collector in back of robot)

	//- Rotate to the right
	//- Move backward
	//- Rotate to the left
	//- Move backward
	//- Vision Tracking


	Requires(CommandBase::driveBase);

	AddSequential(new LeftAutonomousTurn1());
	AddSequential(new MoveBackwardUsingEncoder1());
	AddSequential(new LeftAutonomousTurn2());
	AddSequential(new MoveBackwardUsingEncoder2());
	AddSequential(new VisionTracking());

	// Add Commands here:
	// e.g. AddSequential(new Command1());
	//      AddSequential(new Command2());
	// these will run in order.

	// To run multiple commands at the same time,
	// use AddParallel()
	// e.g. AddParallel(new Command1());
	//      AddSequential(new Command2());
	// Command1 and Command2 will run in parallel.

	// A command group will require all of the subsystems that each member
	// would require.
	// e.g. if Command1 requires chassis, and Command2 requires arm,
	// a CommandGroup containing them would require both the chassis and the
	// arm.
}