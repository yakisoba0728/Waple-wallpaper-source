// Function: FUN_1404abfb8
// Addr: 1404abfb8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404abfb8(char param_1,longlong param_2)

{
  char *pcVar1;
  undefined2 uVar2;
  byte in_AL;
  char cVar3;
  byte in_AH;
  byte bVar4;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  undefined2 *unaff_RBX;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  pcVar1 = (char *)(param_2 * 8 + 0x21004abe);
  *pcVar1 = *pcVar1 + param_1;
  *(uint *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) | 6)
       = *(uint *)(CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) | 6) |
         CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)) | 6;
  bVar4 = in_AH | in_AL | 6;
  cVar3 = (in_AL | 6 |
          *(byte *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(bVar4,in_AL))) | 6)) + 100;
  out(0xa3,CONCAT22(in_register_00000002,CONCAT11(bVar4,cVar3)));
  uVar2 = TaskRegister();
  *unaff_RBX = uVar2;
  *unaff_RDI = *unaff_RSI;
  TaskRegister(CONCAT11(bVar4,cVar3));
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar4,cVar3))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar4,cVar3)))
       + cVar3;
  out(0xa3,CONCAT22(in_register_00000002,CONCAT11(bVar4,cVar3)));
  uVar2 = TaskRegister();
  *unaff_RBX = uVar2;
  unaff_RDI[1] = uRam000000000021004a;
  TaskRegister(CONCAT11(bVar4,cVar3));
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar4,cVar3))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar4,cVar3)))
       + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

