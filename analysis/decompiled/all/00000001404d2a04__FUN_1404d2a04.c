// Function: FUN_1404d2a04
// Addr: 1404d2a04
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d2a04(longlong param_1,undefined8 param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  char *in_RAX;
  uint *puVar5;
  byte *pbVar9;
  char unaff_BL;
  char unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  byte *unaff_RBP;
  int *unaff_RDI;
  undefined1 auStack_8 [8];
  byte *pbVar6;
  char *pcVar7;
  char cVar8;
  
  in_RAX[4] = in_RAX[4] + unaff_BH;
  cVar1 = (char)in_RAX;
  *in_RAX = *in_RAX + cVar1;
  cVar8 = (char)((ulonglong)in_RAX >> 8) + (char)((ulonglong)param_2 >> 8);
  puVar5 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(cVar8,cVar1));
  *unaff_RBP = *unaff_RBP - (char)param_1;
  *puVar5 = *puVar5 & (uint)puVar5;
  *(char *)puVar5 = (char)*puVar5 + cVar1;
  pbVar9 = (byte *)(param_1 + -1);
  if (pbVar9 == (byte *)0x0 || (char)*puVar5 == '\0') {
    bVar2 = cVar1 + cVar8;
    pbVar6 = (byte *)CONCAT71((int7)((ulonglong)puVar5 >> 8),bVar2);
    bVar3 = *unaff_RBP;
    *unaff_RBP = *unaff_RBP - (byte)pbVar9;
    *unaff_RDI = (*unaff_RDI - CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) -
                 (uint)(bVar3 < (byte)pbVar9);
    *pbVar6 = *pbVar6 | bVar2;
    bVar3 = *pbVar9;
    *pbVar9 = *pbVar9 + bVar2;
    iVar4 = (int)pbVar6 + 0x7e00900 + (uint)CARRY1(bVar3,bVar2);
    bVar3 = (byte)iVar4 & (byte)param_2;
    pcVar7 = (char *)(ulonglong)CONCAT31((int3)((uint)iVar4 >> 8),bVar3);
    *pcVar7 = *pcVar7 + unaff_BL;
    *pcVar7 = *pcVar7 + bVar3;
    *(uint *)(pcVar7 + (longlong)pbVar9) = *(uint *)(pcVar7 + (longlong)pbVar9) & (uint)auStack_8;
    pcVar7[CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) * 4] =
         pcVar7[CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) * 4] +
         (char)((uint)iVar4 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

