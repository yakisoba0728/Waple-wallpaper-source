// Function: FUN_1404b525c
// Addr: 1404b525c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b525c(undefined8 param_1,int *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint *in_RAX;
  byte bVar7;
  uint unaff_EBX;
  undefined4 unaff_0000001c;
  uint *unaff_RDI;
  char *pcVar6;
  
  bVar7 = (byte)((ulonglong)param_1 >> 8);
  *in_RAX = *in_RAX & (uint)in_RAX;
  bVar4 = (byte)in_RAX;
  *(byte *)in_RAX = (char)*in_RAX + bVar4;
  *(char *)((longlong)in_RAX + 0x1a) = *(char *)((longlong)in_RAX + 0x1a) >> 1;
  pbVar1 = (byte *)(CONCAT44(unaff_0000001c,unaff_EBX) + 0x79);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar7;
  bVar3 = bVar4 - (char)*in_RAX;
  uVar5 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar3 - CARRY1(bVar2,bVar7)) +
          *(int *)CONCAT44(unaff_0000001c,unaff_EBX) +
          (uint)(bVar4 < (byte)*in_RAX || bVar3 < CARRY1(bVar2,bVar7));
  pcVar6 = (char *)(ulonglong)uVar5;
  *(char *)CONCAT44(unaff_0000001c,unaff_EBX) =
       *(char *)CONCAT44(unaff_0000001c,unaff_EBX) + (char)param_2;
  *param_2 = *param_2 + (int)param_2;
  pcVar6[(longlong)param_2 * 2] = pcVar6[(longlong)param_2 * 2] + (char)param_1;
  *pcVar6 = *pcVar6 + (char)uVar5;
  *unaff_RDI = *unaff_RDI & unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

