// Function: FUN_1402fe090
// Addr: 1402fe090
// Size: 277 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402fe090(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  int *piVar4;
  int *piVar5;
  char cVar6;
  int iVar7;
  char cVar8;
  undefined1 auStack_78 [32];
  int local_58;
  uint local_54;
  char local_50;
  undefined4 local_4f;
  undefined4 uStack_4b;
  undefined4 uStack_47;
  undefined4 uStack_43;
  undefined3 uStack_3f;
  ulonglong local_38;
  
  local_38 = DAT_1404dc040 ^ (ulonglong)auStack_78;
  local_50 = '0';
  local_4f = _DAT_14043b349;
  uStack_4b = _UNK_14043b34d;
  uStack_47 = _UNK_14043b351;
  uStack_43 = _UNK_14043b355;
  uStack_3f = DAT_14043b358._1_3_;
  uVar2 = FUN_1404144f0();
  cVar8 = '\x01';
  if (local_50 != '\0') {
    pcVar3 = &local_50;
    cVar6 = '\0';
    iVar7 = 0;
    do {
      pcVar3 = (char *)FUN_140305960(pcVar3,param_1,uVar2,&local_54);
      cVar8 = cVar6;
      iVar1 = iVar7;
      if (local_54 < 2) {
        piVar4 = (int *)FUN_1404148a0(uVar2,&local_58);
        piVar5 = (int *)FUN_1404148b0(uVar2,&local_58);
        if ((((local_58 != 0) && (*piVar4 != 0)) && (cVar8 = '\x01', iVar1 = *piVar5, cVar6 != '\0')
            ) && (cVar8 = cVar6, iVar1 = iVar7, *piVar5 != iVar7)) {
          cVar8 = '\0';
          break;
        }
      }
      iVar7 = iVar1;
      cVar6 = cVar8;
      cVar8 = '\x01';
    } while (*pcVar3 != '\0');
  }
  FUN_1404145e0(uVar2);
  *(char *)(param_1 + 0x28) = cVar8;
  return;
}

