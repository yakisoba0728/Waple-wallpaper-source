// Function: FUN_1401b0360
// Addr: 1401b0360
// Size: 164 bytes


void FUN_1401b0360(undefined8 *param_1,char param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  lVar2 = param_1[2];
  lVar4 = 0;
  while (lVar2 != 0) {
    puVar3 = param_1;
    if (3 < (ulonglong)param_1[3]) {
      puVar3 = (undefined8 *)*param_1;
    }
    uVar1 = *(uint *)((longlong)puVar3 + lVar2 * 4 + -4);
    lVar4 = lVar2;
    if ((0x20 < uVar1) || ((0x100002200U >> ((ulonglong)uVar1 & 0x3f) & 1) == 0)) break;
    param_1[2] = lVar2 + -1;
    puVar3 = param_1;
    if (3 < (ulonglong)param_1[3]) {
      puVar3 = (undefined8 *)*param_1;
    }
    *(undefined4 *)((longlong)puVar3 + (lVar2 + -1) * 4) = 0;
    lVar2 = param_1[2];
    lVar4 = lVar2;
  }
  if (param_2 == '\0') {
    return;
  }
  if (lVar4 != 0) {
    puVar3 = param_1;
    if (3 < (ulonglong)param_1[3]) {
      puVar3 = (undefined8 *)*param_1;
    }
    if (*(int *)((longlong)puVar3 + lVar4 * 4 + -4) == 0x2026) {
      return;
    }
  }
  FUN_1401b8900(param_1,0x2026);
  return;
}

