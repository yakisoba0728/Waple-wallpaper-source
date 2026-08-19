// Function: FUN_1404d2804
// Addr: 1404d2804
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d282a) overlaps instruction at (ram,0x0001404d2829)
    */

void FUN_1404d2804(char *param_1,char param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  char cVar7;
  undefined8 in_RAX;
  undefined7 uVar8;
  char *pcVar5;
  char *pcVar6;
  byte unaff_BL;
  char unaff_BH;
  undefined2 unaff_0000001a;
  char *unaff_RSI;
  char unaff_R12B;
  byte *pbVar4;
  
  uVar8 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar2 = (byte)in_RAX & unaff_BL;
  pbVar4 = (byte *)CONCAT71(uVar8,bVar2);
  *param_4 = *param_4 + unaff_R12B;
  *unaff_RSI = *unaff_RSI + bVar2;
  bVar1 = *pbVar4;
  *pbVar4 = *pbVar4 + bVar2;
  if ((char)*pbVar4 < '\0') {
    iVar3 = (int)CONCAT71(uVar8,(bVar2 - *pbVar4) - CARRY1(bVar1,bVar2)) +
            CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) +
            (uint)(bVar2 < *pbVar4 || (byte)(bVar2 - *pbVar4) < CARRY1(bVar1,bVar2));
    pbVar4 = (byte *)(ulonglong)CONCAT31((int3)((uint)iVar3 >> 8),(byte)iVar3 & unaff_BL);
  }
  else {
    *pbVar4 = *pbVar4 + bVar2;
    if (*pbVar4 == 0) {
      *pbVar4 = *pbVar4 + bVar2;
      goto code_r0x0001404d282e;
    }
  }
  *pbVar4 = *pbVar4 + (char)pbVar4;
  pcVar5 = (char *)((ulonglong)pbVar4 ^ 0x1a);
  *param_1 = *param_1 + param_2;
  cVar7 = (char)((ulonglong)pbVar4 >> 8);
  *pcVar5 = *pcVar5 + cVar7;
  pcVar6 = (char *)CONCAT62((int6)((ulonglong)pbVar4 >> 0x10),
                            CONCAT11(cVar7 + unaff_BH,(char)pcVar5));
  *param_4 = *param_4 + unaff_R12B;
  *pcVar6 = *pcVar6 + (char)pcVar5;
code_r0x0001404d282e:
  func_0x0001614d755f();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

