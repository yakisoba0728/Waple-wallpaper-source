// Function: FUN_14049f0c0
// Addr: 14049f0c0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049f0c0(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  ulonglong in_RAX;
  int *piVar2;
  undefined1 uVar3;
  char cVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  
  uVar6 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar5 = (undefined2)((ulonglong)param_2 >> 0x10);
  uVar3 = (undefined1)param_2;
  piVar2 = (int *)(in_RAX | 1);
  *piVar2 = *piVar2 - (int)piVar2;
  uVar1 = (int)piVar2 + 0x3600470;
  cVar4 = (char)((ulonglong)param_2 >> 8) + *(char *)(ulonglong)uVar1;
  *(int *)CONCAT44(uVar6,CONCAT22(uVar5,CONCAT11(cVar4,uVar3))) =
       *(int *)CONCAT44(uVar6,CONCAT22(uVar5,CONCAT11(cVar4,uVar3))) +
       CONCAT22(uVar5,CONCAT11(cVar4,uVar3));
  if (!SCARRY4(uVar1,0xe621200)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

