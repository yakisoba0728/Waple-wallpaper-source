// Function: FUN_1404d0c28
// Addr: 1404d0c28
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d0c28(undefined8 param_1,byte *param_2,char param_3,char *param_4)

{
  byte bVar1;
  byte bVar2;
  undefined8 in_RAX;
  
  *param_4 = *param_4 + param_3;
  bVar2 = (byte)((ulonglong)in_RAX >> 8);
  *param_2 = *param_2 + bVar2;
  bVar1 = *param_2;
  *param_2 = *param_2 + bVar2;
  if (!CARRY1(bVar1,bVar2)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

