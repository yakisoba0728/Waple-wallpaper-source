// Function: FUN_1404ca334
// Addr: 1404ca334
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ca334(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char unaff_R12B;
  
  uVar4 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar3 = (undefined2)((ulonglong)param_2 >> 0x10);
  uVar2 = (undefined1)param_2;
  *(char *)CONCAT44(uVar4,CONCAT22(uVar3,CONCAT11(0x32,uVar2))) =
       *(char *)CONCAT44(uVar4,CONCAT22(uVar3,CONCAT11(0x32,uVar2))) +
       (char)((ulonglong)param_1 >> 8);
  *param_1 = *param_1 + unaff_R12B;
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x680032b0);
  *pcVar1 = *pcVar1 + unaff_BH;
  *(uint *)CONCAT44(uVar4,CONCAT22(uVar3,CONCAT11(0x32,uVar2))) =
       *(uint *)CONCAT44(uVar4,CONCAT22(uVar3,CONCAT11(0x32,uVar2))) &
       CONCAT22(uVar3,CONCAT11(0x32,uVar2));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

