// Function: FUN_1404abfc8
// Addr: 1404abfc8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404abfc8(void)

{
  undefined2 uVar1;
  char in_AL;
  char cVar2;
  undefined1 in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  undefined2 *unaff_RBX;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  cVar2 = in_AL + 'd';
  out(0xa3,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2)));
  uVar1 = TaskRegister();
  *unaff_RBX = uVar1;
  *unaff_RDI = *unaff_RSI;
  TaskRegister(CONCAT11(in_AH,cVar2));
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2)))
       + cVar2;
  out(0xa3,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2)));
  uVar1 = TaskRegister();
  *unaff_RBX = uVar1;
  unaff_RDI[1] = uRam000000000021004a;
  TaskRegister(CONCAT11(in_AH,cVar2));
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2)))
       + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

