// Function: FUN_1404af56c
// Addr: 1404af56c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404af58e) overlaps instruction at (ram,0x0001404af58d)
    */

void FUN_1404af56c(uint *param_1,int *param_2)

{
  byte *pbVar1;
  uint uVar2;
  undefined3 uVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  uint in_EAX;
  uint uVar7;
  byte bVar9;
  undefined1 unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  float10 in_ST0;
  char *pcVar8;
  
  bVar9 = (byte)((ulonglong)param_2 >> 8);
  uVar3 = (undefined3)(in_EAX + 0xc7000b64 >> 8);
  bVar4 = (char)(in_EAX + 0xc7000b64) + (0x38fff49b < in_EAX);
  pcVar8 = (char *)(ulonglong)CONCAT31(uVar3,bVar4);
  *(float *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x14) = (float)in_ST0;
  pcVar8[0x21004af4] = pcVar8[0x21004af4] + bVar4;
  *pcVar8 = *pcVar8 + bVar4;
  cVar5 = bVar4 + CARRY1(unaff_BH,bVar4);
  pcVar8 = (char *)(ulonglong)CONCAT31(uVar3,cVar5);
  *(float *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH + bVar4,unaff_BL)) + 0x14) = (float)in_ST0;
  pcVar8[0x21004af4] = pcVar8[0x21004af4] + cVar5;
  *pcVar8 = *pcVar8 + cVar5;
  pbVar1 = (byte *)(pcVar8 + -0x38ffebad);
  bVar4 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar9;
  cVar6 = cVar5 + CARRY1(bVar4,bVar9);
  if (!SCARRY1(cVar5,CARRY1(bVar4,bVar9))) {
    *(char *)param_1 = (char)*param_1 + cVar6;
    *param_2 = *param_2 - (int)param_1;
    *(char *)param_1 = (char)*param_1 + (char)((ulonglong)param_1 >> 8);
    uVar7 = (uint)CONCAT71(0x781b00,bRam00000000781b0006 | 6);
    uVar2 = uVar7 + *param_1;
    *(int *)(ulonglong)uVar2 = (*(int *)(ulonglong)uVar2 - uVar2) - (uint)CARRY4(uVar7,*param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(ulonglong)CONCAT31(uVar3,cVar6) = *(char *)(ulonglong)CONCAT31(uVar3,cVar6) + cVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

