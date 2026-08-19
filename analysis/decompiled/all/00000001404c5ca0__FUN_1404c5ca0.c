// Function: FUN_1404c5ca0
// Addr: 1404c5ca0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c5ca0(longlong param_1,int param_2)

{
  byte bVar1;
  int *in_RAX;
  undefined7 uVar3;
  byte bVar5;
  byte *pbVar4;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  bool bVar6;
  char *pcVar2;
  
  *(char *)((longlong)in_RAX + param_1) =
       *(char *)((longlong)in_RAX + param_1) + (char)((uint)param_2 >> 8);
  pbVar4 = (byte *)((longlong)in_RAX + 0x2f);
  *pbVar4 = *pbVar4 >> 1 | *pbVar4 << 7;
  bVar5 = (byte)((ulonglong)param_1 >> 8);
  bVar6 = CARRY1(bRam00000001084c8bf6,bVar5);
  bRam00000001084c8bf6 = bRam00000001084c8bf6 + bVar5;
  pbVar4 = (byte *)(param_1 + -1);
  if (pbVar4 == (byte *)0x0 || bRam00000001084c8bf6 == '\0') {
    *pbVar4 = *pbVar4 + (char)((ulonglong)in_RAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       (*(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) - param_2) - (uint)bVar6;
  *in_RAX = *in_RAX + (int)in_RAX;
  uVar3 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar1 = (char)in_RAX + 0x82;
  pcVar2 = (char *)CONCAT71(uVar3,bVar1);
  *pcVar2 = *pcVar2 + bVar1;
  bVar1 = bVar1 & (byte)param_2;
  pcVar2 = (char *)CONCAT71(uVar3,bVar1);
  *pcVar2 = *pcVar2 + unaff_BH;
  *pcVar2 = *pcVar2 + bVar1;
  bVar5 = *pbVar4;
  *pbVar4 = *pbVar4 + bVar1;
  cRam000000014cce6d0f = cRam000000014cce6d0f + bVar1 + CARRY1(bVar5,bVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

