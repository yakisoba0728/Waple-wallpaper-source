// Function: FUN_1404ab278
// Addr: 1404ab278
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ab278(undefined8 param_1,undefined8 param_2)

{
  char in_AL;
  char cVar1;
  byte in_AH;
  byte bVar2;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  
  bVar2 = in_AH | (byte)((ulonglong)param_2 >> 8);
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar2,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar2,in_AL)))
       - in_AL;
  cVar1 = in_AL + -0x3c;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar2,cVar1))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar2,cVar1)))
       & CONCAT22(in_register_00000002,CONCAT11(bVar2,cVar1));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

