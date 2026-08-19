// Function: FUN_1404d5cd4
// Addr: 1404d5cd4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d5cd4(undefined8 param_1,byte param_2,char param_3,char *param_4)

{
  byte bVar1;
  uint uVar2;
  longlong in_RAX;
  undefined8 unaff_RBX;
  longlong unaff_RDI;
  char unaff_R12B;
  undefined8 unaff_retaddr;
  char *pcVar3;
  
  bVar1 = *(byte *)(unaff_RDI + in_RAX);
  uVar2 = (int)in_RAX + 0x10000c34;
  pcVar3 = (char *)(ulonglong)uVar2;
  cRam00000001284d939a = cRam00000001284d939a + (char)((ulonglong)unaff_RBX >> 8);
  *param_4 = *param_4 + unaff_R12B;
  *pcVar3 = *pcVar3 + (char)uVar2;
  *pcVar3 = *pcVar3 + (param_2 | bVar1);
  cRam00000001284d93aa = cRam00000001284d93aa + (char)((ulonglong)unaff_retaddr >> 8);
  *param_4 = *param_4 + param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

