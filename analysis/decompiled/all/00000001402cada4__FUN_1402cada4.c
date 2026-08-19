// Function: FUN_1402cada4
// Addr: 1402cada4
// Size: 5 bytes


void FUN_1402cada4(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5
                  ,undefined8 param_6)

{
  longlong lVar1;
  ulonglong *puVar2;
  byte bVar3;
  
  lVar1 = FUN_1402caad8(param_6);
  if (((lVar1 == 0) || (*(longlong *)(lVar1 + 0x3b8) == 0)) &&
     (puVar2 = (ulonglong *)func_0x0001402cab44(0x1404e4510,param_6),
     bVar3 = (byte)DAT_1404dc110 & 0x3f,
     (*puVar2 ^ DAT_1404dc110) >> bVar3 == 0 && (*puVar2 ^ DAT_1404dc110) << 0x40 - bVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson(param_1,param_2,param_3,param_4,param_5);
  }
  thunk_FUN_140420d40(param_1,param_2,param_3,param_4,param_5);
  return;
}

