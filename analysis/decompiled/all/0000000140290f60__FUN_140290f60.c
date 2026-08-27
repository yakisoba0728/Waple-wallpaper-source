// Function: FUN_140290f60
// Addr: 140290f60
// Size: 480 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_140290f60(void)

{
  DWORD *pDVar1;
  WORD WVar2;
  BOOL BVar3;
  DWORD DVar4;
  uint uVar5;
  PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX Buffer;
  ulonglong uVar6;
  ushort uVar7;
  PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX p_Var8;
  int iVar9;
  undefined1 auStack_78 [32];
  DWORD local_58 [14];
  ulonglong local_20;
  
  local_20 = DAT_1404dc040 ^ (ulonglong)auStack_78;
  local_58[0] = 0x30;
  Buffer = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)0x0;
  BVar3 = GetLogicalProcessorInformationEx
                    (RelationProcessorPackage,
                     (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)(local_58 + 2),local_58);
  p_Var8 = Buffer;
  if (BVar3 == 0) {
    do {
      DVar4 = GetLastError();
      if (DVar4 != 0x7a) {
        if (p_Var8 != (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)0x0) {
          thunk_FUN_14028af80(p_Var8);
        }
        return 0;
      }
      Buffer = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)FUN_14028b480(local_58[0],&PTR_140426e20);
      if (p_Var8 != (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)0x0) {
        thunk_FUN_14028af80(p_Var8);
      }
      if (Buffer == (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)0x0) {
        return 0;
      }
      BVar3 = GetLogicalProcessorInformationEx(RelationProcessorPackage,Buffer,local_58);
      p_Var8 = Buffer;
    } while (BVar3 == 0);
  }
  else {
    p_Var8 = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)(local_58 + 2);
  }
  iVar9 = 0;
  if (local_58[0] != 0) {
    do {
      WVar2 = (p_Var8->u).Processor.GroupCount;
      uVar7 = 0;
      pDVar1 = &p_Var8->Size;
      if (WVar2 != 0) {
        do {
          uVar6 = *(ulonglong *)((longlong)&p_Var8->u + (ulonglong)uVar7 * 0x10 + 0x18);
          if (DAT_1404dc008 < 2) {
            uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
            uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
            uVar5 = (uint)(byte)(((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                                0x38);
          }
          else {
            uVar5 = (uint)POPCOUNT(uVar6);
          }
          iVar9 = iVar9 + uVar5;
          uVar7 = uVar7 + 1;
        } while (uVar7 != WVar2);
      }
      p_Var8 = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)
               ((longlong)&p_Var8->Relationship + (ulonglong)*pDVar1);
      local_58[0] = local_58[0] - *pDVar1;
    } while (local_58[0] != 0);
    local_58[0] = 0;
  }
  if (Buffer != (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)0x0) {
    thunk_FUN_14028af80(Buffer);
  }
  return iVar9;
}

