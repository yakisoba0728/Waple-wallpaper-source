// Function: FUN_1404d0c18
// Addr: 1404d0c18
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d0c18(undefined8 param_1,byte *param_2,char param_3,char *param_4)

{
  byte bVar1;
  byte bVar2;
  char *in_RAX;
  char unaff_R12B;
  
  *param_4 = *param_4 + unaff_R12B;
  *in_RAX = *in_RAX + (char)in_RAX;
  bVar2 = (byte)((ulonglong)in_RAX >> 8);
  in_RAX[-0x47] = in_RAX[-0x47] + bVar2;
  *param_4 = *param_4 + param_3;
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

