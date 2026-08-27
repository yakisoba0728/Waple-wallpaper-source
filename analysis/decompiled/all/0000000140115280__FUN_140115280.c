// Function: FUN_140115280
// Addr: 140115280
// Size: 561 bytes


void FUN_140115280(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  byte bVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  
  lVar3 = FUN_140086de0(param_2,&DAT_1404884a4,&DAT_1404884a8);
  if (*(char *)(lVar3 + 8) == '\a') {
    uVar4 = FUN_140086de0(lVar3,"value","");
    fVar9 = (float)FUN_140086220(uVar4);
    fVar10 = fVar9 / DAT_1404928f8;
    if (fVar9 / DAT_1404928f8 <= DAT_140492654) {
      fVar10 = DAT_140492654;
    }
    *(float *)(param_1 + 400) = fVar10;
  }
  lVar3 = FUN_140086de0(param_2,"volume","");
  if (*(char *)(lVar3 + 8) == '\a') {
    lVar5 = FUN_140086de0(lVar3,"value","");
    if (*(byte *)(lVar5 + 8) - 1 < 3) {
      uVar4 = FUN_140086de0(lVar3,"value","");
      fVar10 = (float)FUN_140086220(uVar4);
      fVar10 = fVar10 / DAT_1404928f8;
      *(float *)(param_1 + 0x178) = fVar10;
      FUN_1401816d0(*(undefined8 *)(param_1 + 0x180),fVar10 * *(float *)(param_1 + 0x174));
    }
  }
  lVar3 = FUN_140086de0(param_2,"audioprocessing","");
  if (*(char *)(lVar3 + 8) != '\a') goto LAB_14011543f;
  cVar2 = FUN_14010d100(param_1);
  if (cVar2 == '\0') goto LAB_14011543f;
  lVar3 = FUN_140086de0(lVar3,"value","");
  uVar1 = *(uint *)(param_1 + 0x1b8);
  if (*(char *)(lVar3 + 8) == '\x05') {
    cVar2 = FUN_140086300();
    if (cVar2 == '\0') goto LAB_1401153d2;
    bVar7 = 1;
  }
  else {
LAB_1401153d2:
    bVar7 = 0;
  }
  if (((byte)(uVar1 >> 3) & 1) != bVar7) {
    if (bVar7 == 0) {
      lVar3 = *(longlong *)(param_1 + 0x180);
      *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) & 0xfffffff7;
      if (lVar3 != 0) {
        FUN_1404217a0(*(undefined8 *)(lVar3 + 0x2d0),0,0x300);
        FUN_1404217a0(*(undefined8 *)(lVar3 + 0x2d8),0,0x180);
        FUN_1404217a0(*(undefined8 *)(lVar3 + 0x2e0),0,0xc0);
      }
    }
    else {
      *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 8;
    }
  }
LAB_14011543f:
  FUN_140181f30(*(undefined8 *)(param_1 + 0x180),param_2);
  uVar4 = 0;
  uVar8 = 0;
  lVar3 = FUN_140086de0(param_2,"cameraparallax","");
  if (*(char *)(lVar3 + 8) == '\a') {
    uVar6 = FUN_140086de0(lVar3,"value","");
    cVar2 = FUN_140086300(uVar6);
    if (cVar2 == '\0') {
      uVar4 = 0x200;
    }
    else {
      uVar8 = 0x200;
    }
  }
  FUN_140115a90(param_1,uVar4,uVar8);
  return;
}

