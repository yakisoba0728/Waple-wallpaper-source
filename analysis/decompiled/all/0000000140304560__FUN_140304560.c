// Function: FUN_140304560
// Addr: 140304560
// Size: 290 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140304560(longlong param_1,longlong param_2,longlong *param_3)

{
  short sVar1;
  short sVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_88 [32];
  int local_68;
  ushort local_64;
  int local_60 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1404dc110 ^ (ulonglong)auStack_88;
  lVar3 = *(longlong *)(param_1 + 8);
  lVar10 = *(longlong *)(*(longlong *)(param_2 + 0x80) + 0x38);
  local_64 = *(ushort *)(param_2 + 0x68);
  local_60[0] = 0;
  local_68 = 0;
  sVar1 = *(short *)(lVar10 + 0xc);
  sVar2 = *(short *)(lVar3 + 0x300);
  local_58 = _DAT_140436770;
  uStack_50 = _UNK_140436778;
  if ((local_64 == 0) ||
     (*(code **)((&PTR_PTR_140438b90)[*(int *)(*param_3 + 4)] + 0x28) == (code *)0x0))
  goto LAB_14030474a;
  lVar4 = *(longlong *)(param_2 + 0x78);
  (**(code **)((&PTR_PTR_140438b90)[*(int *)(*param_3 + 4)] + 0x28))(param_3,&local_68,local_60);
  if ((sVar1 == sVar2) && ((local_60[0] < 1 || (local_60[0] == *(int *)(lVar3 + 0x304))))) {
UNWIND_INFO_140304675_UnwindCodes_1__UnwindOpCode:
    if ((0 < local_68) && (local_68 != *(int *)(lVar3 + 0x308)))
    goto UNWIND_INFO_140304675_UnwindCodes_14__UnwindOpCode;
  }
  else {
    iVar6 = func_0x000140304340(param_1,param_2);
    lVar9 = (longlong)*(int *)(lVar10 + 0x10) * (longlong)iVar6;
    *(int *)(lVar3 + 0x304) = local_60[0];
    *(undefined2 *)(lVar3 + 0x300) = *(undefined2 *)(lVar10 + 0xc);
    *(int *)(lVar3 + 0x30c) =
         (int)(short)((uint)((int)((ulonglong)((lVar9 >> 0x3f) + 0x8000 + lVar9) >> 0x10) + 0x8000)
                     >> 0x10);
    if (sVar1 == sVar2) goto UNWIND_INFO_140304675_UnwindCodes_1__UnwindOpCode;
UNWIND_INFO_140304675_UnwindCodes_14__UnwindOpCode:
    uVar5 = (uint)local_64;
    iVar7 = func_0x000140304340(param_1,param_2,local_68);
    iVar6 = *(int *)(lVar10 + 0x14);
    *(int *)(lVar3 + 0x308) = local_68;
    *(undefined2 *)(lVar3 + 0x300) = *(undefined2 *)(lVar10 + 0xc);
    lVar10 = (longlong)iVar6 * (longlong)iVar7;
    *(int *)(lVar3 + 0x310) =
         (int)(short)((uint)((int)((ulonglong)((lVar10 >> 0x3f) + 0x8000 + lVar10) >> 0x10) + 0x8000
                            ) >> 0x10);
    uVar8 = func_0x0001402efae0((uVar5 * 0x10000 - iVar7) + -0x80000,uVar5 * 0x10000);
    *(undefined4 *)(lVar3 + 0x314) = uVar8;
  }
  func_0x0001402f2cd0(lVar4 + 0x98,*(undefined4 *)(lVar3 + 0x30c),*(undefined4 *)(lVar3 + 0x310));
  uStack_50 = CONCAT44(*(undefined4 *)(lVar3 + 0x314),(undefined4)uStack_50);
  FUN_1402f3770(lVar4 + 0x98,&local_58);
LAB_14030474a:
  func_0x0001402ed2f0(local_48 ^ (ulonglong)auStack_88);
  return;
}

