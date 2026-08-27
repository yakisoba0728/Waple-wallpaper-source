// Function: FUN_14003b8e0
// Addr: 14003b8e0
// Size: 144 bytes


int * FUN_14003b8e0(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  ulonglong *puVar4;
  longlong lVar5;
  int *piVar6;
  bool bVar7;
  undefined1 auStack_68 [16];
  uint uStack_58;
  int iStack_54;
  undefined8 uStack_50;
  int *piStack_48;
  longlong local_28 [4];
  
  local_28[2] = 0;
  local_28[3] = 0;
  local_28[0] = 0;
  local_28[1] = 0;
  uStack_50 = 0x14003b90e;
  FUN_140016170(local_28,*param_2,param_2[1]);
  uStack_50 = 0x14003b91b;
  piStack_48 = (int *)FUN_140015460(param_1,local_28);
  if (7 < (ulonglong)local_28[3]) {
    puVar4 = (ulonglong *)(local_28[3] * 2 + 2);
    lVar5 = local_28[0];
    if (0xfff < puVar4) {
      lVar5 = *(longlong *)(local_28[0] + -8);
      if (0x1f < (local_28[0] - lVar5) - 8U) {
        piVar6 = (int *)&DAT_00000005;
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)();
        *piVar6 = 0;
        piVar6[1] = 0xffff;
        if (7 < puVar4[3]) {
          puVar4 = (ulonglong *)*puVar4;
        }
        uVar2 = FUN_140290230(puVar4,auStack_68);
        piVar6[2] = uVar2;
        if (uVar2 == 0) {
          iVar3 = 0x16d;
          if ((uStack_58 & 1) == 0) {
            iVar3 = 0x1ff;
          }
          piVar6[1] = iVar3;
          if ((uStack_58 >> 10 & 1) != 0) {
            if (iStack_54 == -0x5ffffff4) {
              *piVar6 = 4;
              return piVar6;
            }
            if (iStack_54 == -0x5ffffffd) {
              *piVar6 = 10;
              return piVar6;
            }
          }
          *piVar6 = ((uStack_58 & 0x10) != 0) + 2;
          return piVar6;
        }
        piVar6[1] = 0xffff;
        if (uVar2 < 0x41) {
          if (((uVar2 == 0x40) || (uVar2 == 2)) || (uVar2 == 3)) goto LAB_14003ba4c;
          bVar7 = uVar2 == 0x35;
        }
        else {
          if ((uVar2 == 0x7b) || (uVar2 == 0xa1)) goto LAB_14003ba4c;
          bVar7 = uVar2 == 0x10b;
        }
        if (!bVar7) {
          *piVar6 = 0;
          return piVar6;
        }
LAB_14003ba4c:
        *piVar6 = 1;
        return piVar6;
      }
      puVar4 = (ulonglong *)(local_28[3] * 2 + 0x29);
    }
    uStack_50 = 0x14003b960;
    thunk_FUN_14028af80(lVar5,puVar4);
  }
  return piStack_48;
}

