// Function: FUN_1402bf690
// Addr: 1402bf690
// Size: 68 bytes


void FUN_1402bf690(longlong *param_1)

{
  code *pcVar1;
  
  if ((code *)PTR__guard_check_icall_140426ad8 != _guard_check_icall) {
    if (((ulonglong)param_1[2] < *(ulonglong *)((longlong)Self + 0x10)) ||
       (*(ulonglong *)((longlong)Self + 8) < (ulonglong)param_1[2])) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(0xd);
    }
    if (*param_1 == 0) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(0xd);
    }
  }
  return;
}

