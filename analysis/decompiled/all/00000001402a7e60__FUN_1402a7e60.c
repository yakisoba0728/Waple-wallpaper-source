// Function: FUN_1402a7e60
// Addr: 1402a7e60
// Size: 101 bytes


ulonglong FUN_1402a7e60(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if (((ushort *)**(undefined8 **)(lVar1 + 0x38) == (ushort *)0x0) ||
       (**(int **)(lVar1 + 0x50) < 1)) {
      uVar2 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
    }
    else {
      uVar2 = (ulonglong)*(ushort *)**(undefined8 **)(lVar1 + 0x38);
    }
    if ((short)uVar2 != -1) {
      *(short *)((longlong)param_1 + 10) = (short)uVar2;
      *(undefined1 *)(param_1 + 1) = 1;
      return uVar2;
    }
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return (ulonglong)*(ushort *)((longlong)param_1 + 10);
}

