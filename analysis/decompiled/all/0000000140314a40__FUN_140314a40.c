// Function: FUN_140314a40
// Addr: 140314a40
// Size: 315 bytes


undefined8 FUN_140314a40(longlong *param_1,undefined1 param_2)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  longlong lVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined1 local_res8 [8];
  int local_res18 [4];
  
  lVar3 = *param_1;
  lVar4 = *(longlong *)(lVar3 + 0x90);
  if (lVar4 != 0) {
    uVar5 = *(undefined8 *)(lVar4 + 0x10);
    uVar6 = *(undefined8 *)(lVar3 + 0x98);
    lVar8 = func_0x0001402f7f60(uVar5,0x340,local_res18);
    if (local_res18[0] == 0) {
      pcVar7 = *(code **)(*(longlong *)(lVar4 + 8) + 0x138);
      pcVar10 = FUN_14030cee0;
      if (pcVar7 != (code *)0x0) {
        pcVar10 = pcVar7;
      }
      *(code **)(lVar8 + 0x18) = pcVar10;
      *(undefined8 *)(lVar8 + 0x10) = uVar5;
      *(undefined4 *)(lVar8 + 0x254) = 0x20;
      uVar9 = FUN_1402f80c0(uVar5,0x18,0,0x20,0,local_res18);
      *(undefined8 *)(lVar8 + 600) = uVar9;
      if (local_res18[0] != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1402f8060(uVar5,lVar8);
      }
    }
    if (lVar8 != 0) {
      param_1[0x22] = lVar8;
      *(undefined1 *)(lVar8 + 0x2c6) = param_2;
      uVar1 = *(ushort *)(lVar3 + 0x184);
      *(uint *)(lVar8 + 0x22c) = (uint)uVar1;
      uVar2 = *(ushort *)(lVar3 + 0x186);
      *(uint *)(lVar8 + 0x23c) = (uint)uVar2;
                    /* WARNING: Subroutine does not return */
      FUN_1402f8180(uVar6,0x14,0,(uint)uVar2 + (uint)uVar1,0,local_res8);
    }
  }
  return 0x99;
}

