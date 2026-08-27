// Function: FUN_14028c3b0
// Addr: 14028c3b0
// Size: 117 bytes


void FUN_14028c3b0(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 local_res8 [32];
  
  FUN_1402914b0(local_res8,2);
  uVar2 = 1;
  *(undefined8 *)(param_1 + 8) = 1;
  do {
    lVar1 = *(longlong *)(uVar2 * 8 + 0x1404e3ad0);
    if ((lVar1 == 0) || (lVar1 == param_1)) break;
    uVar2 = uVar2 + 1;
    *(ulonglong *)(param_1 + 8) = uVar2;
  } while (uVar2 < 8);
  (&DAT_1404e3b20)[uVar2] = (&DAT_1404e3b20)[uVar2] + '\x01';
  *(longlong *)(uVar2 * 8 + 0x1404e3ad0) = param_1;
  FUN_140291550(local_res8);
  return;
}

