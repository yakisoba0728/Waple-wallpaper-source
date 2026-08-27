// Function: FUN_1402ea568
// Addr: 1402ea568
// Size: 245 bytes


undefined8
FUN_1402ea568(ulonglong *param_1,undefined2 *param_2,ulonglong param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong lVar6;
  
  __acrt_lock(0xb);
  uVar8 = 0;
  if (param_1 != (ulonglong *)0x0) {
    *param_1 = 0;
    if (param_2 == (undefined2 *)0x0) {
LAB_1402ea5c4:
      if (param_3 == 0) goto LAB_1402ea5c9;
LAB_1402ea5d0:
      bVar1 = false;
    }
    else {
      if (param_3 == 0) {
        if (param_2 == (undefined2 *)0x0) goto LAB_1402ea5c4;
        goto LAB_1402ea5d0;
      }
LAB_1402ea5c9:
      bVar1 = true;
    }
    if (bVar1) {
      if (param_2 != (undefined2 *)0x0) {
        *param_2 = 0;
      }
      lVar4 = FUN_1402ea4d0(param_4);
      if (lVar4 != 0) {
        lVar5 = -1;
        do {
          lVar6 = lVar5;
          lVar5 = lVar6 + 1;
        } while (*(short *)(lVar4 + lVar5 * 2) != 0);
        uVar7 = lVar6 + 2;
        *param_1 = uVar7;
        if (param_3 != 0) {
          if (param_3 < uVar7) {
            uVar8 = 0x22;
          }
          else {
            iVar2 = FUN_1402deba0();
            if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
        }
      }
      goto LAB_1402ea622;
    }
  }
  puVar3 = (undefined4 *)FUN_1402caf34();
  uVar8 = 0x16;
  *puVar3 = 0x16;
  FUN_1402cad8c();
LAB_1402ea622:
  __acrt_unlock(0xb);
  return uVar8;
}

