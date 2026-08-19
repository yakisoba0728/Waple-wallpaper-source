// Function: FUN_1404c9948
// Addr: 1404c9948
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c9948(int *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint *in_RAX;
  char *pcVar4;
  char cVar6;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  uint unaff_ESI;
  undefined4 unaff_00000034;
  int *unaff_RDI;
  char in_R11B;
  char unaff_R12B;
  char *pcVar3;
  int *piVar5;
  
  cVar6 = (char)((ulonglong)param_2 >> 8);
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(byte *)in_RAX = (char)*in_RAX + (byte)in_RAX;
  out(0x21,(uint)in_RAX);
  bVar1 = (byte)in_RAX ^ (byte)*in_RAX;
  pcVar3 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar1);
  *param_2 = *param_2 & unaff_ESI;
  pcVar3[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 4 + 0x4c] =
       pcVar3[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 4 + 0x4c] + (char)param_1;
  *(char *)param_1 = (char)*param_1 + (char)((ulonglong)in_RAX >> 8);
  *pcVar3 = *pcVar3 + bVar1;
  pcVar4 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + -0x18ffcddf);
  *pcVar4 = *pcVar4 + unaff_BH;
  *param_2 = *param_2 & unaff_ESI;
  *pcVar3 = *pcVar3 + cVar6;
  pcVar4 = (char *)(ulonglong)(uint)(int)(short)pcVar3;
  *(char *)param_1 = (char)*param_1 + unaff_R12B;
  *pcVar4 = *pcVar4 + bVar1;
  pcVar4[-0x41ffcddf] = pcVar4[-0x41ffcddf] + cVar6;
  *param_2 = *param_2 & unaff_ESI;
  *pcVar4 = *pcVar4 + (char)((ulonglong)param_1 >> 8);
  uVar2 = (uint)(short)pcVar3;
  piVar5 = (int *)(ulonglong)uVar2;
  *(char *)param_1 = (char)*param_1 + in_R11B;
  *unaff_RDI = *unaff_RDI - uVar2;
  *(char *)piVar5 = (char)*piVar5 + unaff_BL;
  *piVar5 = *piVar5 + uVar2;
  *param_1 = *param_1 + (int)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

