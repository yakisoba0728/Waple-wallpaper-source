// Function: FUN_1401ea310
// Addr: 1401ea310
// Size: 490 bytes


void FUN_1401ea310(longlong param_1,undefined4 param_2,undefined4 param_3,uint param_4,uint param_5,
                  int param_6,int param_7)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  bool bVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(param_1 + 0x304) & 2;
  if ((uVar5 == 0) && ((*(uint *)(param_1 + 0x304) & 0x220) != 0)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  plVar1 = (longlong *)(param_1 + 0x2e0);
  puVar3 = (undefined8 *)*plVar1;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  plVar2 = (longlong *)(param_1 + 0x2e8);
  *plVar1 = 0;
  puVar3 = (undefined8 *)*plVar2;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  *plVar2 = 0;
  if (((0 < *(int *)(param_1 + 800)) || ((*(byte *)(param_1 + 0x304) & 0x10) != 0)) ||
     (((*(byte *)(param_1 + 0x120) & 4) != 0 &&
      (*(longlong *)(param_1 + 0x198) != *(longlong *)(param_1 + 0x1a0))))) {
    FUN_1401ede30(*(longlong *)(param_1 + 200),0x4000000040000000,
                  CONCAT44((float)param_5,(float)param_4),CONCAT44(param_3,param_2),
                  (*(uint *)(*(longlong *)(param_1 + 200) + 0x118) & 1 ^ 1) << 2 | 1,plVar1);
    if ((uVar5 != 0) || (uVar5 = 2, bVar4)) {
      uVar5 = 0;
    }
    FUN_1401ede30(*(undefined8 *)(param_1 + 200),CONCAT44((float)param_7,(float)param_6),
                  CONCAT44((float)param_5,(float)param_4),CONCAT44(param_3,param_2),uVar5 | 1,plVar2
                 );
  }
  return;
}

