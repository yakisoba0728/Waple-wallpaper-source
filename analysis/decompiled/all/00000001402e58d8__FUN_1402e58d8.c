// Function: FUN_1402e58d8
// Addr: 1402e58d8
// Size: 191 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402e58d8(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,int param_6,int param_7)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_58 [2];
  longlong local_50;
  longlong local_48;
  char cStack_38;
  ulonglong local_30;
  
  puVar7 = auStack_88;
  puVar9 = auStack_88;
  puVar8 = auStack_88;
  local_30 = DAT_1404dc110 ^ (ulonglong)local_58;
  func_0x0001402bf8e8(&local_50,param_1);
  if (param_6 == 0) {
    param_6 = *(int *)(local_48 + 0xc);
  }
  local_60 = 0;
  local_68 = 0;
  iVar1 = FUN_1402dcc48(param_6,(-(param_7 != 0) & 8U) + 1,param_3,param_4);
  if (iVar1 == 0) goto UNWIND_INFO_1402e5997_UnwindCodes_73__UnwindOpCode;
  uVar5 = (longlong)iVar1 * 2;
  uVar4 = -(ulonglong)(uVar5 < uVar5 + 0x10) & uVar5 + 0x10;
  if (uVar4 == 0) {
    puVar6 = (undefined4 *)0x0;
code_r0x0001402e5a16:
    puVar9 = puVar8;
    if (puVar6 == (undefined4 *)0x0) goto UNWIND_INFO_1402e5997_UnwindCodes_73__UnwindOpCode;
  }
  else {
    if (uVar4 < 0x401) {
      lVar2 = func_0x0001402ed390();
      lVar2 = -lVar2;
      puVar8 = auStack_88 + lVar2;
      puVar7 = auStack_88 + lVar2;
      puVar3 = (undefined4 *)((longlong)local_58 + lVar2);
      puVar6 = (undefined4 *)0x0;
      if (puVar3 == (undefined4 *)0x0) goto code_r0x0001402e5a16;
      *puVar3 = 0xcccc;
code_r0x0001402e59c4:
      puVar6 = puVar3 + 4;
      puVar8 = puVar7;
    }
    else {
      puVar3 = (undefined4 *)FUN_1402da070();
      puVar6 = (undefined4 *)0x0;
      puVar8 = auStack_88;
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0xdddd;
        goto code_r0x0001402e59c4;
      }
    }
    if (puVar6 == (undefined4 *)0x0) goto code_r0x0001402e5a16;
    *(undefined8 *)(puVar8 + -8) = 0x1402e59da;
    func_0x000140421870(puVar6,0,uVar5);
    *(int *)(puVar8 + 0x28) = iVar1;
    *(undefined4 **)(puVar8 + 0x20) = puVar6;
    *(undefined8 *)(puVar8 + -8) = 0x1402e59f6;
    iVar1 = FUN_1402dcc48(param_6,1,param_3,param_4);
    if (iVar1 == 0) goto code_r0x0001402e5a16;
    *(undefined8 *)(puVar8 + -8) = 0x1402e5a10;
    (*_UNK_140426598)(param_2,puVar6,iVar1,param_5);
  }
  puVar9 = puVar8;
  if (puVar6[-4] == 0xdddd) {
    *(undefined8 *)(puVar8 + -8) = 0x1402e5a2e;
    FUN_1402d9110();
  }
UNWIND_INFO_1402e5997_UnwindCodes_73__UnwindOpCode:
  if (cStack_38 != '\0') {
    *(uint *)(local_50 + 0x3a8) = *(uint *)(local_50 + 0x3a8) & 0xfffffffd;
  }
  uVar5 = local_30 ^ (ulonglong)local_58;
  *(undefined8 *)(puVar9 + -8) = 0x1402e5a4d;
  func_0x0001402ed2f0(uVar5);
  return;
}

