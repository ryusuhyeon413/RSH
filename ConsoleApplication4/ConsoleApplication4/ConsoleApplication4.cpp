// ConsoleApplication4.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <iostream>
#include<CoalaMOD.h>
#include<string>
#include<vector>
#pragma comment(lib, "CoalaMOD.lib")


using namespace std;

int main()
{
	int px, py, pz;
	getPlayerLocation(&px, &py, &pz);

	//std::vector<std::string> v;
	//v.push_back("형우야");
	//v.push_back("형우야");
	//v.push_back("형우야");
	//std::string str[3] = { "dd", "db", "dyadfsdfawsdf" };
	//std::vector<std::string> vec(str, str + 3);
	std::string strr = "a";
	//char aa[10] = "asdf";


	//WoolID wool = createWool(BlockColor);


	//BannerID banner = createBanner(BANNER_STANDING, strr, COLOR_BLACK);
	
	//CarpetID carpet = createCarpet(BlockColor);
	//TerracottaID terracotta = createTerracotta(TerracottaType, BlockColor);
	//ShulkerBoxID shulkerBox = createShulkerBox(BlockColor);
	TorchID torch = createTorch();
	LadderID ladder = createLadder();
	PressurePlateID pressurePlate = createPressurePlate(PRESSURE_PLATE_STONE_PRESSURE_PLATE);
	//ButtonID button = createButton(BUTTON_WOOD, false);

	ConcreteID;
	//AnvilID anvil = createAnvil(10);
	PlantID plant = createPlant(PLANT_CHORUS);
	WaterID water = createWater(true);
	//BedID bed = createBed();
	//BeaconID beacon = createBeacon();
	//BarrierID barrier = createBarrier();
	//BookshelfID bookshelf = createBookshelf();
	//
	//
	//
	//BrewingStandID brewingStand = createBrewingStand();
	//
	//CakeID cake = createCake();
	//IceID ice = createIce(ICE);
	//LavaID lava = createLava(false);
	//PumpkinID pumkin = createPumpkin();
	SnowID snow = createSnow(1);
	CauldronID;
	CraftingTableID;
	EnchantingTableID;
	EndRodID;
	FarmlandID;
	FlowerPotID;
	FurnaceID;
	JackOLanternID;
	SeaLanternID;
	LeverID;
	SpongeID;
	SpawnerID;


	//FlowerID flower = createFlower(FlowerType);
	DoorID door1 = createDoor(DOOR_OAK, false, HINGE_LEFT);
	//DoorID door1 = createDoor(DoorType, OPEN, DoorHinge);
	//installDoor(door1, px, py, pz, FACING_EAST);


	//WoodID wood = createWood(WOOD_DARK_OAK, STRIP_UP_DOWN);
	locateBlock(torch, px, py, pz);
	//locateBlock(banner, px, py, pz);


	return 0;
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.


/*int px, py, pz;

void testBlock(Location loc) {
	int count = 49;
	for (int i = 0; i < count; i++) {
		BlockID block = createBlock(BlockType(i + 1));
		locateBlock(block, loc.x, loc.y, loc.z + 2 * i + 1);
	}
}

void testOre(Location loc) {
	int count = 9;
	for (int i = 0; i < count; i++) {
		BlockID block = createOre(OreType(i + 1));
		locateOre(block, loc.x, loc.y, loc.z + 2 * i + 1);
	}
}

void testBricks(Location loc) {
	int count = 7;
	for (int i = 0; i < count; i++) {
		BlockID block = createBricks(BricksType(i + 1));
		locateBricks(block, loc.x, loc.y, loc.z + 2 * i + 1);
	}
}

void testPlanks(Location loc) {
	int count = 6;
	for (int i = 0; i < count; i++) {
		BlockID block = createPlanks(PlanksType(i + 1));
		locatePlanks(block, loc.x, loc.y, loc.z + 2 * i + 1);
	}
}

void testWood(Location loc) {
	int count = 24;
	for (int i = 0; i < count; i++) {
		BlockID block = createWood(WoodType(i / 4 + 1), WoodStrip(i % 4));
		locateWood(block, loc.x, loc.y, loc.z + 2 * i + 1);
	}
}

void testStairs(Location loc) {
	BlockOrientation orientations[4] = { FACING_EAST, FACING_WEST, FACING_SOUTH, FACING_NORTH };	int count = 12;

	for (int i = 0; i < count; i++) {
		BlockID block = createStairs(StairsType(i + 1), i % 2 == 0);
		installStairs(block, loc.x, loc.y, loc.z + 2 * i + 1, orientations[i % 4]);
	}
}

void testDoor(Location loc) {
	BlockOrientation orientations[4] = { FACING_EAST, FACING_WEST, FACING_SOUTH, FACING_NORTH };
	int count = 13;
	for (int i = 0; i < count; i++) {
		BlockID block = createDoor(DoorType(i + 1), i % 2 == 0, DoorHinge(i % 2));
		installDoor(block, loc.x, loc.y, loc.z + 2 * i + 1, orientations[i % 4]);
	}
}

void testFence(Location loc) {
	int count = 7;
	for (int i = 0; i < count; i++) {
		BlockID block = createFence(FenceType(i + 1));
		locateFence(block, loc.x, loc.y, loc.z + i + 1);
		locateFence(block, loc.x + 1, loc.y, loc.z + i + 1);
	}
}

void testPane(Location loc) {
	int count = 2;
	for (int i = 0; i < count; i++) {
		BlockID block = createPane(PaneType(i + 1));
		locatePane(block, loc.x, loc.y, loc.z + i + 1);
		locatePane(block, loc.x + 1, loc.y, loc.z + i + 1);
	}

	count = 16;
	for (int i = 0; i < count; i++) {
		BlockID block = createPane(BlockColor(i));
		locatePane(block, loc.x, loc.y, loc.z + i + 3);
		locatePane(block, loc.x + 1, loc.y, loc.z + i + 3);
	}
}

void testFlower(Location loc) {
	int count = 17;
	for (int i = 0; i < count; i++) {
		BlockID block = createFlower(FlowerType(i + 1));
		locateFlower(block, loc.x, loc.y, loc.z + 2 * i + 1);
	}
}

void testSlab(Location loc) {
	int count = 17;
	for (int i = 0; i < count; i++) {
		BlockID block1 = createSlab(SlabType(i + 1));
		BlockID block2 = createSlab(SlabType(i + 1), SLAB_UPPER);
		BlockID block3 = createSlab(SlabType(i + 1), SLAB_DOUBLE);

		locateSlab(block1, loc.x, loc.y, loc.z + 2 * i + 1);
		locateSlab(block2, loc.x - 1, loc.y, loc.z + 2 * i + 1);
		locateSlab(block3, loc.x, loc.y, loc.z + 2 * i);
	}
}

void testTerracotta(Location loc) {
	int count = 16;
	for (int i = 0; i < count; i++) {
		BlockID block = createTerracotta(TERRACOTTA, BlockColor(i));
		locateTerracotta(block, loc.x, loc.y, loc.z + 2 * i + 1);
	}


	for (int i = 0; i < count; i++) {
		BlockID block = createTerracotta(TERRACOTTA_GLAZED, BlockColor(i));
		locateTerracotta(block, loc.x, loc.y, loc.z + 2 * i);
	}
}

void testShulkerBox(Location loc) {
	int count = 16;
	for (int i = 0; i < count; i++) {
		BlockID block = createShulkerBox(BlockColor(i));
		locateShulkerBox(block, loc.x, loc.y, loc.z + 2 * i + 1);
	}
}

void testWool(Location loc) {

	int count = 16;
	for (int i = 0; i < count; i++) {
		BlockID block = createWool(BlockColor(i));
		locateWool(block, loc.x, loc.y, loc.z + 2 * i + 1);
	}
}

void testCarpet(Location loc) {

	int count = 16;
	for (int i = 0; i < count; i++) {
		BlockID block = createCarpet(BlockColor(i));
		locateCarpet(block, loc.x, loc.y, loc.z + 2 * i + 1);
	}
}

void testSign(Location loc) {
	std::vector<string> texts = { "1st line", "2nd line", "3rd line", "4th line" };
	BlockID block = createSign(SignType(SIGN_STANDING), texts);
	int count = 16;
	for (int i = 0; i < count; i++) {
		installSign(block, loc.x, loc.y, loc.z + 2 * i + 1, BlockOrientation(i));
	}
}

void testBanner(Location loc) {
	int count = 16;		// for all colors and orientations
	for (int i = 0; i < count; i++) {
		int banner = createBanner(BANNER_STANDING, "", BlockColor(i));
		addPatternToBanner(banner, BlockColor((i + 1) % 16), "flo");
		installBanner(banner, loc.x, loc.y, loc.z + 2 * i + 1, BlockOrientation(i));
	}
}

void testTorch(Location loc) {
	int stone = createBlock(BLOCK_STONE);
	TorchID torch = createTorch();

	locateBlock(stone, loc.x + 1, loc.y, loc.z + 1);
	installTorch(torch, loc.x + 1, loc.y + 1, loc.z + 1, FACING_UP);

	int count = 5;
	for (int i = 0; i < count; i++) {
		locateBlock(stone, loc.x + 2, loc.y + i, loc.z + 2);
		installTorch(torch, loc.x + 1, loc.y + i, loc.z + 2, FACING_WEST);
		installTorch(torch, loc.x + 3, loc.y + i, loc.z + 2, FACING_EAST);
		installTorch(torch, loc.x + 2, loc.y + i, loc.z + 1, FACING_NORTH);
		installTorch(torch, loc.x + 2, loc.y + i, loc.z + 3, FACING_SOUTH);
	}
}

void testLadder(Location loc) {
	int stone = createBlock(BLOCK_STONE);
	int ladder = createLadder();

	int count = 5;
	for (int i = 0; i < count; i++) {
		locateBlock(stone, loc.x + 2, loc.y + i, loc.z + 2);
		installLadder(ladder, loc.x + 1, loc.y + i, loc.z + 2, FACING_WEST);
		installLadder(ladder, loc.x + 3, loc.y + i, loc.z + 2, FACING_EAST);
		installLadder(ladder, loc.x + 2, loc.y + i, loc.z + 1, FACING_NORTH);
		installLadder(ladder, loc.x + 2, loc.y + i, loc.z + 3, FACING_SOUTH);
	}
}

void testRail(Location loc) {
	int rail = createRail(RAIL);

	int count = 5;
	installRail(rail, loc.x + 1, loc.y, loc.z + 1, RAIL_CONNECTING_SOUTH_EAST);
	for (int i = 1; i < count; i++) {
		installRail(rail, loc.x + i + 1, loc.y, loc.z + 1, RAIL_CONNECTING_EAST_WEST);
	}

	installRail(rail, loc.x + count + 1, loc.y, loc.z + 1, RAIL_CONNECTING_SOUTH_WEST);
	for (int i = 1; i < count; i++) {
		installRail(rail, loc.x + count + 1, loc.y, loc.z + i + 1, RAIL_CONNECTING_NORTH_SOUTH);
	}

	installRail(rail, loc.x + count + 1, loc.y, loc.z + count + 1, RAIL_CONNECTING_NORTH_WEST);
	for (int i = 1; i < count; i++) {
		installRail(rail, loc.x + count - i + 1, loc.y, loc.z + count + 1, RAIL_CONNECTING_EAST_WEST);
	}

	installRail(rail, loc.x + 1, loc.y, loc.z + count + 1, RAIL_CONNECTING_NORTH_EAST);
	for (int i = 1; i < count; i++) {
		installRail(rail, loc.x + 1, loc.y, loc.z + count - i + 1, RAIL_CONNECTING_NORTH_SOUTH);
	}
}

void testPressurePlate(Location loc) {
	for (int i = 0; i < 4; i++) {
		PressurePlateID block = createPressurePlate(PressurePlateType(i + 1));
		locatePressurePlate(block, loc.x, loc.y, loc.z + 2 * i + 1);
	}

}

void testButton(Location loc) {
	BlockID stone = createBlock(BLOCK_STONE);
	locateBlock(stone, loc.x, loc.y + 4, loc.z);

	ButtonID btn1 = createButton(BUTTON_STONE);
	installButton(btn1, loc.add(0, 3, 0), FACING_DOWN);
	installButton(btn1, loc.add(0, 5, 0), FACING_UP);
	installButton(btn1, loc.add(1, 4, 0), FACING_EAST);
	installButton(btn1, loc.add(-1, 4, 0), FACING_WEST);
	installButton(btn1, loc.add(0, 4, -1), FACING_NORTH);
	installBanner(btn1, loc.add(0, 4, 1), FACING_SOUTH);

	loc = loc.add(0, 0, 5);
	PlanksID oak = createPlanks(PLANKS_OAK);
	locatePlanks(oak, loc.x, loc.y + 4, loc.z);

	ButtonID btn2 = createButton(BUTTON_WOOD);
	installButton(btn2, loc.add(0, 3, 0), FACING_DOWN);
	installButton(btn2, loc.add(0, 5, 0), FACING_UP);
	installButton(btn2, loc.add(1, 4, 0), FACING_EAST);
	installButton(btn2, loc.add(-1, 4, 0), FACING_WEST);
	installButton(btn2, loc.add(0, 4, -1), FACING_NORTH);
	installBanner(btn2, loc.add(0, 4, 1), FACING_SOUTH);
}

void testConcrete(Location loc) {
	int count = 16;
	for (int i = 0; i < count; i++) {
		BlockID block1 = createConcrete(BlockColor(i));
		BlockID block2 = createConcrete(BlockColor(i), true);
		locateConcrete(block1, loc.x, loc.y, loc.z + 2 * i + 1);
		locateConcrete(block2, loc.x + 1, loc.y, loc.z + 2 * i + 1);
	}
}

void testAnvil(Location loc) {
	BlockOrientation orientations[4] = { FACING_EAST, FACING_WEST, FACING_SOUTH, FACING_NORTH };	int count = 12;

	for (int i = 0; i < count; i++) {
		BlockID block = createAnvil(i % 3);
		installAnvil(block, loc.x, loc.y, loc.z + 2 * i + 1, orientations[i % 4]);
	}
}

void testPlant(Location loc) {
	int count = 26;
	for (int i = 0; i < count; i++) {
		BlockID block = createPlant(PlantType(i + 1));
		locatePlant(block, loc.x, loc.y, loc.z + 2 * i + 1);
	}
}

void testWater(Location loc) {
	BlockID stone = createBlock(BLOCK_STONE);
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++)
			locateBlock(stone, loc.x + i, loc.y, loc.z + j);
	}
	BlockID water1 = createWater();
	BlockID water2 = createWater(true);
	locateWater(water1, loc.x + 1, loc.y, loc.z + 1);
	locateWater(water2, loc.x + 1, loc.y, loc.z + 3);
}

void testBed(Location loc) {
	BedID bed = createBed();
	installBed(bed, loc, FACING_EAST);
	installBed(bed, loc.add(0, 0, 3), FACING_WEST);
	installBed(bed, loc.add(0, 0, 6), FACING_NORTH);
	installBed(bed, loc.add(0, 0, 9), FACING_SOUTH);
}

void testBeacon(Location loc) {
	locateBeacon(createBeacon(), loc);
}

void testBarrier(Location loc) {
	locateBarrier(createBarrier(), loc);
}

void testBookShelf(Location loc) {
	locateBookshelf(createBookshelf(), loc);
}

void testBrewingStand(Location loc) {
	locateBrewingStand(createBrewingStand(), loc);
}

void testCake(Location loc) {
	int eaten = 7;
	for (int i = 0; i < eaten; i++) {
		locateCake(createCake(i), loc.add(0, 0, i));
	}
}

void testIce(Location loc) {
	int type = 3;
	for (int i = 0; i < type; i++) {
		locateIce(createIce(IceType(i)), loc.add(0, 0, i));
	}
}

void testLava(Location loc) {
	BlockID stone = createBlock(BLOCK_STONE);
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++)
			locateBlock(stone, loc.x + i, loc.y, loc.z + j);
	}
	BlockID lava1 = createLava();
	BlockID lava2 = createLava(true);
	locateWater(lava1, loc.x + 1, loc.y, loc.z + 1);
	locateWater(lava2, loc.x + 1, loc.y, loc.z + 3);
}

void testPumpkin(Location loc) {
	PumpkinID pumpkin = createPumpkin();
	installPumpkin(pumpkin, loc, FACING_EAST);
	installPumpkin(pumpkin, loc.add(0, 0, 2), FACING_WEST);
	installPumpkin(pumpkin, loc.add(0, 0, 4), FACING_NORTH);
	installPumpkin(pumpkin, loc.add(0, 0, 6), FACING_SOUTH);
}

void testSnow(Location loc) {
	for (int i = 0; i < 9; i++)
		locateSnow(createSnow(i), loc.add(0, 0, i));
}

void testCauldron(Location loc) {
	int full = 4;
	for (int i = 0; i < full; i++) {
		locateCauldron(createCauldron(i), loc.add(0, 0, i));
	}
}

void testTables(Location loc) {
	locateCraftingTable(createCraftingTable(), loc);
	locateEnchantingTable(createEnchantingTable(), loc.add(0, 0, 3));
}

void testEndRod(Location loc) {
	EndRodID rod = createEndRod();
	installEndRod(rod, loc, FACING_DOWN);
	installEndRod(rod, loc.add(0, 0, 1), FACING_UP);
	installEndRod(rod, loc.add(0, 0, 2), FACING_NORTH);
	installEndRod(rod, loc.add(0, 0, 3), FACING_SOUTH);
	installEndRod(rod, loc.add(0, 0, 4), FACING_EAST);
	installEndRod(rod, loc.add(0, 0, 5), FACING_WEST);
}

void testFlowerPot(Location loc) {
	int type = 14;
	for (int i = 0; i < type; i++) {
		FlowerPotID pot = createFlowerPot(FlowerPotType(i + 1));
		locateFlowerPot(pot, loc.add(0, 0, i));
	}
}

void testFurnace(Location loc) {
	FurnaceID furnace = createFurnace();
	installFurnace(furnace, loc.add(0, 0, 0), FACING_NORTH);
	installFurnace(furnace, loc.add(0, 0, 2), FACING_SOUTH);
	installFurnace(furnace, loc.add(0, 0, 4), FACING_EAST);
	installFurnace(furnace, loc.add(0, 0, 6), FACING_WEST);
}

void testLanterns(Location loc) {
	JackOLanternID j = createJackOLantern();
	installJackOLantern(j, loc.add(0, 0, 0), FACING_NORTH);
	installJackOLantern(j, loc.add(0, 0, 2), FACING_SOUTH);
	installJackOLantern(j, loc.add(0, 0, 4), FACING_EAST);
	installJackOLantern(j, loc.add(0, 0, 6), FACING_WEST);

	SeaLanternID s = createSeaLantern();
	locateSeaLantern(s, loc.add(0, 0, 8));
}

void testLever(Location loc) {
	BlockID stone = createBlock(BLOCK_STONE);
	LeverID lever = createLever();

	for (int i = 0; i < 6; i++)
		locateBlock(stone, loc.add(0, 3, 2 * i));

	installLever(lever, loc.add(0, 4, 0), FACING_UP);
	installLever(lever, loc.add(0, 2, 2), FACING_DOWN);
	installLever(lever, loc.add(1, 3, 4), FACING_EAST);
	installLever(lever, loc.add(0, 3, 7), FACING_SOUTH);
	installLever(lever, loc.add(-1, 3, 8), FACING_WEST);
	installLever(lever, loc.add(0, 3, 9), FACING_NORTH);
}

void testSponge(Location loc) {
	locateSponge(createSponge(), loc);
}

void testSpawner(Location loc) {
	locateSpawner(createSpawner(), loc);
}

#define TEST(f)		test ## f (loc.add(x, 0, 0 )); x += 5

int main() {
	Location loc = getPlayerLocation();
	int x = 5;

	TEST(Block);
	TEST(Ore);
	TEST(Bricks);
	TEST(Planks);
	TEST(Wood);
	TEST(Stairs);
	TEST(Door);
	TEST(Fence);
	TEST(Pane);
	TEST(Flower);
	TEST(Slab);
	TEST(Terracotta);
	TEST(ShulkerBox);
	TEST(Wool);
	TEST(Carpet);
	//TEST(Banner);
	TEST(Torch);
	TEST(Ladder);
	TEST(Rail); x += 5;
	TEST(PressurePlate);
	TEST(Button);

	TEST(Concrete);
	TEST(Anvil);
	TEST(Plant);
	TEST(Water);
	TEST(Bed);
	TEST(Beacon);
	TEST(Barrier);
	TEST(BookShelf);
	TEST(BrewingStand);
	TEST(Cake);
	TEST(Ice);
	TEST(Lava);
	TEST(Pumpkin);
	TEST(Snow);
	TEST(Cauldron);
	TEST(Tables);
	TEST(EndRod);

	TEST(FlowerPot);
	TEST(Furnace);
	TEST(Lanterns);
	TEST(Lever);
	TEST(Sponge);
	TEST(Spawner);
}
*/