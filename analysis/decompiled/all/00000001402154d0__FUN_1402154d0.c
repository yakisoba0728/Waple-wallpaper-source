// Function: FUN_1402154d0
// Addr: 1402154d0
// Size: 299 bytes


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1402154d0(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 local_1008 [4088];
  undefined8 uStack_10;
  
  uStack_10 = 0x1402154e5;
  lVar2 = param_2 - param_1 >> 3;
  if (lVar2 < 0x21) {
    FUN_14019fde0(param_1,param_2,&LAB_1401fac30);
  }
  else {
    uVar3 = lVar2 - (lVar2 - (param_2 - param_1 >> 0x3f) >> 1);
    uVar4 = uVar3;
    if (0x200 < uVar3) {
      uVar4 = 0x7fffffffffffffff;
      if ((longlong)uVar3 < 0x7fffffffffffffff) {
        uVar4 = uVar3;
      }
      if ((uVar4 < 0x2000000000000000) && (0 < (longlong)uVar4)) {
        do {
          puVar1 = (undefined1 *)FUN_1402ecff0(uVar4 * 8,&PTR_140426e20);
          if (puVar1 != (undefined1 *)0x0) {
            if (0x200 < uVar4) goto LAB_140215592;
            goto LAB_140215580;
          }
          uVar4 = uVar4 >> 1;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined1 *)0x0;
LAB_140215580:
      FUN_14028af80(puVar1);
      uVar4 = 0x200;
    }
    puVar1 = local_1008;
LAB_140215592:
    FUN_14019fec0(param_1,param_2,lVar2,puVar1,uVar4,&LAB_1401fac30);
    if (0x200 < uVar4) {
      FUN_14028af80(puVar1);
    }
  }
  return;
}

