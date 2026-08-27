// Function: FUN_1400f5680
// Addr: 1400f5680
// Size: 701 bytes


void FUN_1400f5680(longlong *param_1,char *param_2,undefined8 param_3)

{
  longlong lVar1;
  char *pcVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  size_t sVar7;
  undefined8 ****ppppuVar8;
  uint uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined1 local_53 [3];
  undefined8 ***local_50 [2];
  undefined8 local_40;
  ulonglong local_38;
  
  uVar12 = 0;
  uVar14 = (int)(param_1[1] - *param_1 >> 3) * -0x49249249;
  if (uVar14 != 0) {
    do {
      lVar1 = *param_1;
      lVar13 = uVar12 * 0x38;
      uVar4 = *(uint *)(lVar13 + 0x28 + lVar1);
      if ((uVar4 != 0) && (*(char *)(lVar13 + 0x2c + lVar1) != '\0')) {
        if (*(int *)(lVar13 + lVar1) == 1) {
          uVar4 = uVar4 * 2;
        }
        uVar9 = uVar4;
        if ((int)uVar4 < 0) {
          uVar9 = uVar4 + 3;
        }
        uVar4 = uVar4 & 0x80000003;
        if ((int)uVar4 < 0) {
          uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
        }
        uVar11 = (longlong)(int)((-(uint)(uVar4 != 0) & 4) + ((int)uVar9 >> 2) * 4) /
                 (longlong)(int)((*(int *)(lVar13 + lVar1) == 1) + 1);
        iVar5 = (int)uVar11;
        if (iVar5 < 0) {
          lVar6 = FUN_140053cb0(local_53,-iVar5);
          *(undefined1 *)(lVar6 + -1) = 0x2d;
          lVar6 = lVar6 + -1;
        }
        else {
          lVar6 = FUN_140053cb0(local_53,uVar11 & 0xffffffff);
        }
        FUN_140053d10(local_50,lVar6,local_53);
        pcVar2 = (&PTR_s_float_140482eb8)[(longlong)*(int *)(lVar13 + lVar1) * 2];
        sVar7 = strlen(pcVar2);
        FUN_1400532a0(param_3,pcVar2,sVar7);
        FUN_1400532a0(param_3," accessArray",0xc);
        puVar15 = (undefined8 *)(lVar1 + 8 + lVar13);
        puVar10 = puVar15;
        if (0xf < *(ulonglong *)(lVar13 + 0x20 + lVar1)) {
          puVar10 = (undefined8 *)*puVar15;
        }
        FUN_1400532a0(param_3,puVar10,*(undefined8 *)(lVar13 + 0x18 + lVar1));
        FUN_1400534d0(param_3,0x5b);
        ppppuVar8 = local_50;
        if (0xf < local_38) {
          ppppuVar8 = (undefined8 ****)local_50[0];
        }
        FUN_1400532a0(param_3,ppppuVar8,local_40);
        FUN_1400532a0(param_3,"] = (",5);
        pcVar2 = (&PTR_s_float_140482eb8)[(longlong)*(int *)(lVar13 + lVar1) * 2];
        sVar7 = strlen(pcVar2);
        FUN_1400532a0(param_3,pcVar2,sVar7);
        FUN_1400534d0(param_3,0x5b);
        ppppuVar8 = local_50;
        if (0xf < local_38) {
          ppppuVar8 = (undefined8 ****)local_50[0];
        }
        FUN_1400532a0(param_3,ppppuVar8,local_40);
        FUN_1400532a0(param_3,&DAT_140487b38,2);
        sVar7 = strlen(param_2);
        FUN_1400532a0(param_3,param_2,sVar7);
        if (0xf < *(ulonglong *)(lVar13 + 0x20 + lVar1)) {
          puVar15 = (undefined8 *)*puVar15;
        }
        FUN_1400532a0(param_3,puVar15,*(undefined8 *)(lVar13 + 0x18 + lVar1));
        FUN_1400532a0(param_3,&DAT_140487a64,2);
        if (0xf < local_38) {
          uVar11 = local_38 + 1;
          ppppuVar8 = (undefined8 ****)local_50[0];
          if (0xfff < uVar11) {
            ppppuVar8 = (undefined8 ****)local_50[0][-1];
            if (0x1f < (ulonglong)((longlong)local_50[0] + (-8 - (longlong)ppppuVar8))) {
              pcVar3 = (code *)swi(0x29);
              (*pcVar3)(5);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar11 = local_38 + 0x28;
          }
          thunk_FUN_14028af80(ppppuVar8,uVar11);
        }
      }
      uVar4 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar4;
    } while (uVar4 < uVar14);
  }
  return;
}

