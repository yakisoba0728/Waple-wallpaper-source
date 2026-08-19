// Function: FUN_140084620
// Addr: 140084620
// Size: 6 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140084620(longlong *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  uVar4 = 0;
  if (*param_1 != 0) {
    uStack_18 = 0;
    uStack_10 = 0;
    uVar1 = (*DAT_1404262d8)();
    uStack_18 = CONCAT44(uStack_18._4_4_,uVar1);
    (*DAT_140426998)(FUN_140083070,&uStack_18);
    uVar4 = uStack_10;
  }
  iVar2 = (*DAT_140426af0)(uVar4);
  if (iVar2 != 0) {
    uVar3 = (*DAT_1404269d8)(uVar4,0xfffffff0);
    if ((uVar3 >> 0x1d & 1) == 0) {
      (*DAT_140426950)(uVar4,0xffffffffffffffff,0,0,0,0,3);
      (*DAT_140426950)(uVar4,0xfffffffffffffffe,0,0,0,0,3);
    }
    else {
      (*DAT_140426af8)(uVar4,9);
    }
    (*_UNK_1404268f0)(uVar4);
    (*_UNK_140426a08)(uVar4);
  }
  return;
}

