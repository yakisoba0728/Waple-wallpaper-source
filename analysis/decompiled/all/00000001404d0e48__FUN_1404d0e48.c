// Function: FUN_1404d0e48
// Addr: 1404d0e48
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d0e48(undefined8 param_1,char param_2,char param_3,char *param_4)

{
  char cVar3;
  int in_EAX;
  uint uVar1;
  undefined8 *puVar4;
  undefined8 *unaff_RBP;
  char unaff_R12B;
  undefined8 uStack_10;
  char *pcVar2;
  
  uVar1 = in_EAX + 0xd1000b64;
  pcVar2 = (char *)(ulonglong)uVar1;
  cVar3 = (char)(uVar1 >> 8);
  pcVar2[0xd] = pcVar2[0xd] + cVar3;
  *param_4 = *param_4 + unaff_R12B;
  *pcVar2 = *pcVar2 + (char)uVar1;
  pcVar2[0xd] = pcVar2[0xd] + cVar3;
  *param_4 = *param_4 + unaff_R12B;
  *pcVar2 = *pcVar2 + (char)uVar1;
  pcVar2[-0x2effc073] = pcVar2[-0x2effc073] + cVar3;
  pcVar2[0xd] = pcVar2[0xd] + param_2 + cVar3 * '\x02';
  *param_4 = *param_4 + param_3;
  puVar4 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar3 = '\a';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar4 = puVar4 + -1;
    *puVar4 = *unaff_RBP;
    cVar3 = cVar3 + -1;
  } while ('\0' < cVar3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

