// Function: FUN_1404b06d8
// Addr: 1404b06d8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b06d8(longlong param_1,undefined8 param_2)

{
  longlong in_RAX;
  byte bVar1;
  
  bVar1 = (byte)((ulonglong)param_2 >> 8);
  *(char *)(in_RAX + param_1) = *(char *)(in_RAX + param_1) + bVar1;
  cRam0000000155cbfee4 = cRam0000000155cbfee4 + CARRY1((byte)in_RAX,bVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

