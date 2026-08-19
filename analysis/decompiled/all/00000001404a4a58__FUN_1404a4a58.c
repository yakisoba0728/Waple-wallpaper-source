// Function: FUN_1404a4a58
// Addr: 1404a4a58
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a4a58(undefined8 param_1)

{
  int in_EAX;
  char cVar1;
  undefined6 uVar2;
  
  uVar2 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar1 = (char)((ulonglong)param_1 >> 8) + ((byte)((uint)(in_EAX + -0x3bfafffe) >> 8) | 0xdb);
  *(char *)CONCAT62(uVar2,CONCAT11(cVar1,(char)param_1)) =
       *(char *)CONCAT62(uVar2,CONCAT11(cVar1,(char)param_1)) + -8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

