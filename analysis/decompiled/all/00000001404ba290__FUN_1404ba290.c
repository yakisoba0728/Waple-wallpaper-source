// Function: FUN_1404ba290
// Addr: 1404ba290
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ba290(char *param_1,char param_2)

{
  byte bVar1;
  undefined8 in_RAX;
  char unaff_BH;
  char *unaff_RDI;
  byte *pbVar2;
  
  bVar1 = (byte)in_RAX;
  param_2 = (char)((ulonglong)in_RAX >> 8) + param_2;
  pbVar2 = (byte *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(param_2,bVar1));
  *pbVar2 = *pbVar2 ^ bVar1;
  if (-1 < (char)*pbVar2) {
    *unaff_RDI = *unaff_RDI + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cRam00000001429ba6ad = cRam00000001429ba6ad + bVar1;
  *pbVar2 = *pbVar2 ^ bVar1;
  *param_1 = *param_1 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

