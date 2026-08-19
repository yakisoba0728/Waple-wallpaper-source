// Function: FUN_1404d0820
// Addr: 1404d0820
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d0820(char param_1,char param_2,char param_3,char *param_4)

{
  undefined2 uVar1;
  byte bVar2;
  byte bVar3;
  uint in_EAX;
  uint uVar4;
  char *pcVar5;
  byte *unaff_RDI;
  char unaff_R12B;
  char cVar6;
  
  uVar4 = in_EAX | 0x8000cc4;
  bVar2 = (byte)uVar4;
  bVar3 = bVar2 ^ 0x12;
  uVar1 = (undefined2)(uVar4 >> 0x10);
  cVar6 = (char)(uVar4 >> 8) + bVar3;
  pcVar5 = (char *)(ulonglong)(CONCAT22(uVar1,CONCAT11(cVar6,bVar2)) ^ 0x12);
  pcVar5[-0x4c] = pcVar5[-0x4c] + param_1;
  *unaff_RDI = *unaff_RDI ^ bVar3;
  *param_4 = *param_4 + unaff_R12B;
  *pcVar5 = *pcVar5 + bVar3;
  cVar6 = cVar6 + bVar3;
  pcVar5 = (char *)(ulonglong)(CONCAT22(uVar1,CONCAT11(cVar6,bVar2)) ^ 0x12);
  pcVar5[-0x4c] = pcVar5[-0x4c] + param_1;
  *unaff_RDI = *unaff_RDI ^ bVar3;
  *param_4 = *param_4 + unaff_R12B;
  *pcVar5 = *pcVar5 + bVar3;
  pcVar5[-0x3bffc54d] = pcVar5[-0x3bffc54d] + param_2;
  unaff_RDI[(longlong)pcVar5] = unaff_RDI[(longlong)pcVar5] + cVar6;
  *param_4 = *param_4 + param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

