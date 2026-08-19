// Function: FUN_1404bd9fc
// Addr: 1404bd9fc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bd9fc(char param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  uint uVar1;
  uint in_EAX;
  int *piVar2;
  char cVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  char *unaff_RBX;
  undefined4 *unaff_RSI;
  int *unaff_RDI;
  char in_SF;
  char in_OF;
  
  uVar6 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar5 = (undefined2)((ulonglong)param_2 >> 0x10);
  uVar4 = (undefined1)((ulonglong)param_2 >> 8);
  cVar3 = (char)param_2;
  if (in_OF != in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar1 = in_EAX & 0x254ac100;
  piVar2 = (int *)(ulonglong)uVar1;
  *(char *)(piVar2 + -10) = (char)piVar2[-10] + (char)(uVar1 >> 8);
  *param_4 = *param_4;
  out(*unaff_RSI,(short)param_2);
  *(char *)piVar2 = (char)*piVar2;
  out(unaff_RSI[1],(short)param_2);
  *piVar2 = *piVar2 + uVar1;
  piVar2 = (int *)func_0x000118a4d9a0();
  if (-1 < (int)piVar2 + *piVar2) {
    *(char *)CONCAT44(uVar6,CONCAT22(uVar5,CONCAT11(uVar4,cVar3))) =
         *(char *)CONCAT44(uVar6,CONCAT22(uVar5,CONCAT11(uVar4,cVar3))) + cVar3;
    *unaff_RDI = *unaff_RDI + CONCAT22(uVar5,CONCAT11(uVar4,cVar3));
    *unaff_RBX = *unaff_RBX + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

