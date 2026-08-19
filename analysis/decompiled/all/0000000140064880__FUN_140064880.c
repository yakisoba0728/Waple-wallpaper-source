// Function: FUN_140064880
// Addr: 140064880
// Size: 58 bytes


undefined8 FUN_140064880(undefined8 param_1)

{
  code *pcVar1;
  longlong lVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28 [3];
  ulonglong uStack_10;
  
  bVar9 = false;
  cVar3 = FUN_140018a50();
  if (cVar3 == '\0') {
    puVar4 = (undefined4 *)FUN_140005950(local_28,param_1);
    uStack_48 = *puVar4;
    uStack_44 = puVar4[1];
    uStack_40 = puVar4[2];
    uStack_3c = puVar4[3];
    uStack_38 = puVar4[4];
    uStack_34 = puVar4[5];
    uStack_30 = puVar4[6];
    uStack_2c = puVar4[7];
    *(undefined8 *)(puVar4 + 4) = 0;
    *(undefined8 *)(puVar4 + 6) = 7;
    *(undefined2 *)puVar4 = 0;
    if (7 < uStack_10) {
      uVar7 = uStack_10 * 2 + 2;
      lVar6 = local_28[0];
      if (0xfff < uVar7) {
        lVar6 = *(longlong *)(local_28[0] + -8);
        if (0x1f < (local_28[0] - lVar6) - 8U) goto code_r0x000140064986;
        uVar7 = uStack_10 * 2 + 0x29;
      }
      func_0x00014028b040(lVar6,uVar7);
    }
    bVar9 = true;
    cVar3 = FUN_140060ff0(&uStack_48);
    if (cVar3 != '\0') goto UNWIND_INFO_140064907_UnwindCodes_17__OffsetInProlog;
    uVar5 = 0;
  }
  else {
UNWIND_INFO_140064907_UnwindCodes_17__OffsetInProlog:
    uVar5 = 1;
  }
  if ((bVar9) && (uVar7 = CONCAT44(uStack_2c,uStack_30), 7 < uVar7)) {
    lVar2 = CONCAT44(uStack_44,uStack_48);
    uVar8 = uVar7 * 2 + 2;
    lVar6 = lVar2;
    if (0xfff < uVar8) {
      lVar6 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar6) - 8U) {
code_r0x000140064986:
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return uVar5;
      }
      uVar8 = uVar7 * 2 + 0x29;
    }
    func_0x00014028b040(lVar6,uVar8);
  }
  return uVar5;
}

