// Function: FUN_1404beca8
// Addr: 1404beca8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404beca8(byte param_1)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  char *in_RAX;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  undefined8 *puVar5;
  longlong unaff_RBP;
  longlong unaff_RDI;
  undefined8 *unaff_retaddr;
  undefined8 auStack_10 [2];
  
  *(char *)(unaff_RDI + 0x26) = *(char *)(unaff_RDI + 0x26) + unaff_BH;
  pcVar1 = (char *)(unaff_RDI * 3 + 0x26);
  *pcVar1 = *pcVar1 + unaff_BH;
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x21004b + unaff_RBP * 8)
  ;
  *pcVar1 = *pcVar1 + param_1;
  *in_RAX = *in_RAX + (char)in_RAX;
  *(char *)(unaff_RDI + 0x26) = *(char *)(unaff_RDI + 0x26) + unaff_BH;
  pcVar1 = (char *)(unaff_RDI * 3 + 0x26);
  *pcVar1 = *pcVar1 + unaff_BH;
  pbVar2 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x7c01004b +
                   unaff_RBP * 8);
  bVar3 = *pbVar2;
  *pbVar2 = *pbVar2 + param_1;
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x18);
  *pcVar1 = *pcVar1 + (char)((int)in_RAX + 0x2f87c00 + (uint)CARRY1(bVar3,param_1) >> 8);
  puVar5 = auStack_10 + 1;
  cVar4 = '\x05';
  do {
    unaff_retaddr = unaff_retaddr + -1;
    puVar5 = puVar5 + -1;
    *puVar5 = *unaff_retaddr;
    cVar4 = cVar4 + -1;
  } while ('\0' < cVar4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

