// Function: FUN_140425970
// Addr: 140425970
// Size: 82 bytes


void FUN_140425970(void)

{
  longlong lVar1;
  
  while (DAT_1404dc440 < 10) {
    lVar1 = DAT_1404dc440 * 8;
    DAT_1404dc440 = DAT_1404dc440 + 1;
    lVar1 = (*DAT_140426558)(*(undefined8 *)(&DAT_1404e4200 + lVar1));
    if (lVar1 != 0) {
      (*(code *)PTR_FUN_140426bb8)();
    }
  }
  return;
}

