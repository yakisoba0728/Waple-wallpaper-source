// Function: FUN_1404bec58
// Addr: 1404bec58
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bec58(undefined8 param_1,char *param_2,undefined8 param_3,byte *param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  char *in_RAX;
  byte bVar4;
  byte bVar5;
  undefined6 uVar6;
  char cVar7;
  char cVar8;
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  int unaff_ESI;
  undefined4 unaff_00000034;
  longlong unaff_RDI;
  char in_CF;
  char *unaff_retaddr;
  char *pcVar9;
  
  cVar7 = (char)param_2;
  uVar6 = (undefined6)((ulonglong)param_1 >> 0x10);
  bVar5 = (byte)((ulonglong)param_1 >> 8);
  cVar8 = (char)unaff_RBX + bVar5 + in_CF;
  pcVar9 = (char *)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),cVar8);
  bVar4 = *param_4;
  bVar3 = (byte)in_RAX;
  *param_4 = *param_4 + bVar3;
  bVar4 = ((char)param_1 - *in_RAX) - CARRY1(bVar4,bVar3);
  *param_2 = *param_2 + cVar8;
  if (-1 < *param_2) {
    *pcVar9 = *pcVar9 + cVar7;
    *(int *)CONCAT62(uVar6,CONCAT11(bVar5,bVar4)) =
         *(int *)CONCAT62(uVar6,CONCAT11(bVar5,bVar4)) + unaff_ESI;
    *in_RAX = *in_RAX + bVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(unaff_RBP + -0x76fff218) = *(char *)(unaff_RBP + -0x76fff218) + cVar7;
  pbVar1 = (byte *)(unaff_RDI + -0x38);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar5;
  verr();
  *in_RAX = *in_RAX + bVar3 + CARRY1(bVar2,bVar5);
  pbVar1 = (byte *)(unaff_RDI + -0x68);
  bVar5 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar4;
  cVar8 = *in_RAX;
  *unaff_retaddr = cVar7;
  *(char *)CONCAT44(unaff_00000034,unaff_ESI) =
       *(char *)CONCAT44(unaff_00000034,unaff_ESI) + (char)((ulonglong)param_2 >> 8);
  (&stack0x00000000)
  [(ulonglong)
   ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar3 + cVar8 + CARRY1(bVar5,bVar4)) + 0xd12be800)
   * 8] = (&stack0x00000000)
          [(ulonglong)
           ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar3 + cVar8 + CARRY1(bVar5,bVar4)) +
           0xd12be800) * 8] + bVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

