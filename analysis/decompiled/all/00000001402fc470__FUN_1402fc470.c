// Function: FUN_1402fc470
// Addr: 1402fc470
// Size: 384 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1402fc470(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  char cVar7;
  undefined8 uVar8;
  char cVar9;
  bool bVar10;
  undefined1 auStack_88 [32];
  int local_68;
  uint local_64;
  undefined8 local_60;
  char local_58;
  undefined4 local_57;
  undefined4 uStack_53;
  undefined4 uStack_4f;
  undefined4 uStack_4b;
  undefined3 uStack_47;
  ulonglong local_40;
  
  local_40 = DAT_1404dc040 ^ (ulonglong)auStack_88;
  uVar8 = *(undefined8 *)(param_2 + 0x88);
  *(uint *)(param_1 + 0x40) = (uint)*(ushort *)(param_2 + 0x68);
  local_60 = uVar8;
  iVar1 = FUN_1402f4b80(param_2,0x756e6963);
  if (iVar1 == 0) {
    FUN_140303790(param_1,param_2);
    iVar1 = FUN_140302bf0(param_1,param_2);
    if (iVar1 != 0) {
      uVar2 = 0xffffffff;
      goto LAB_1402fc5c0;
    }
    local_57 = _DAT_14043b349;
    uStack_53 = _UNK_14043b34d;
    uStack_4f = _UNK_14043b351;
    uStack_4b = _UNK_14043b355;
    uStack_47 = DAT_14043b358._1_3_;
    local_58 = '0';
    uVar2 = FUN_1404144f0();
    cVar9 = '\x01';
    if (local_58 != '\0') {
      pcVar3 = &local_58;
      cVar7 = '\0';
      iVar1 = 0;
      do {
        pcVar3 = (char *)FUN_140305960(pcVar3,param_1,uVar2,&local_64);
        cVar9 = cVar7;
        iVar6 = iVar1;
        if (local_64 < 2) {
          piVar4 = (int *)FUN_1404148a0(uVar2,&local_68);
          piVar5 = (int *)FUN_1404148b0(uVar2,&local_68);
          if ((((local_68 != 0) && (*piVar4 != 0)) &&
              (iVar6 = *piVar5, cVar9 = '\x01', cVar7 != '\0')) &&
             (bVar10 = iVar6 != iVar1, cVar9 = cVar7, iVar6 = iVar1, bVar10)) {
            uVar8 = local_60;
            cVar9 = '\0';
            break;
          }
        }
        cVar7 = cVar9;
        uVar8 = local_60;
        cVar9 = '\x01';
        iVar1 = iVar6;
      } while (*pcVar3 != '\0');
    }
    FUN_1404145e0(uVar2);
    *(char *)(param_1 + 0x28) = cVar9;
  }
  uVar2 = 0;
  FUN_140305550(param_1 + 0x38,param_1);
LAB_1402fc5c0:
  *(undefined8 *)(param_2 + 0x88) = uVar8;
  return uVar2;
}

