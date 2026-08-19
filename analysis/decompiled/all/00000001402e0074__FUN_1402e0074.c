// Function: FUN_1402e0074
// Addr: 1402e0074
// Size: 144 bytes


ulonglong FUN_1402e0074(longlong *param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  if (param_1 == (longlong *)0x0) {
    *(undefined1 *)(param_2 + 0x30) = 1;
    *(undefined4 *)(param_2 + 0x2c) = 0x16;
    FUN_1402cada4(0,0,0,0,0,param_2);
  }
  else {
    uVar2 = FUN_1402db68c();
    if ((int)param_1[2] < 0) {
      *(undefined4 *)(param_1 + 2) = 0;
    }
    lVar3 = func_0x0001402dff5c(uVar2,0,1,param_2);
    if (-1 < lVar3) {
      if ((*(uint *)((longlong)param_1 + 0x14) & 0xc0) == 0) {
        return lVar3 - (int)param_1[2];
      }
      uVar6 = *param_1 - param_1[1];
      uVar4 = (ulonglong)(uVar2 & 0x3f);
      lVar5 = (longlong)(int)uVar2 >> 6;
      cVar1 = *(char *)(*(longlong *)(&DAT_1404e4960 + lVar5 * 8) + 0x39 + uVar4 * 0x48);
      if ((*(uint *)((longlong)param_1 + 0x14) & 3) == 0) {
        if ((*(uint *)((longlong)param_1 + 0x14) >> 2 & 1) == 0) {
          *(undefined1 *)(param_2 + 0x30) = 1;
          *(undefined4 *)(param_2 + 0x2c) = 0x16;
          return 0xffffffffffffffff;
        }
      }
      else {
        if ((cVar1 == '\x01') &&
           ((*(byte *)(*(longlong *)(&DAT_1404e4960 + lVar5 * 8) + 0x3d + uVar4 * 0x48) & 2) != 0))
        {
          uVar4 = func_0x0001402e0320(param_1,lVar3,param_2);
          return uVar4;
        }
        if (*(char *)(*(longlong *)(&DAT_1404e4960 + lVar5 * 8) + 0x38 + uVar4 * 0x48) < '\0') {
          lVar5 = func_0x0001402e04a8(param_1[1],*param_1,CONCAT71(0x1404e49,cVar1));
          uVar6 = uVar6 + lVar5;
        }
      }
      if (lVar3 == 0) {
        return uVar6;
      }
      if ((*(uint *)((longlong)param_1 + 0x14) & 1) == 0) {
        if (cVar1 == '\x01') {
          uVar6 = uVar6 >> 1;
        }
        return uVar6 + lVar3;
      }
      uVar4 = func_0x0001402e01c4(param_1,lVar3,uVar6,param_2);
      return uVar4;
    }
  }
  return 0xffffffffffffffff;
}

