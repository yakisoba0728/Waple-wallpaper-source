// Function: FUN_1404c99b4
// Addr: 1404c99b4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c99b4(char *param_1,char param_2)

{
  byte bVar1;
  char cVar4;
  byte *in_RAX;
  char *pcVar2;
  char *pcVar3;
  char unaff_BL;
  undefined7 unaff_00000019;
  undefined4 unaff_ESP;
  undefined4 unaff_00000024;
  char *unaff_RDI;
  char unaff_R12B;
  
  bVar1 = (byte)in_RAX ^ *in_RAX;
  cVar4 = (char)((ulonglong)in_RAX >> 8) + bVar1;
  pcVar2 = (char *)(ulonglong)(uint)(int)CONCAT11(cVar4,bVar1);
  *param_1 = *param_1 + unaff_R12B;
  *pcVar2 = *pcVar2 + bVar1;
  pcVar3 = (char *)(CONCAT44(unaff_00000024,unaff_ESP) + -0x673bffce);
  *pcVar3 = *pcVar3 + bVar1;
  *param_1 = *param_1 + unaff_R12B;
  *pcVar2 = *pcVar2 + bVar1;
  pcVar2[-0x25ffcddd] = pcVar2[-0x25ffcddd] + param_2 + unaff_BL;
  pcVar2[0x19004c98] = pcVar2[0x19004c98] + (char)((ulonglong)param_1 >> 8);
  *(byte *)CONCAT71(unaff_00000019,unaff_BL) =
       *(byte *)CONCAT71(unaff_00000019,unaff_BL) ^ (byte)param_1;
  *unaff_RDI = *unaff_RDI + unaff_BL;
  pcVar3 = (char *)((ulonglong)CONCAT31((int3)cVar4,bVar1) ^ 0xf0);
  *unaff_RDI = *unaff_RDI + unaff_BL;
  *pcVar3 = *pcVar3 + param_2 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

