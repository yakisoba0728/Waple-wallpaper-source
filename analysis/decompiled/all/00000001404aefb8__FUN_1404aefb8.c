// Function: FUN_1404aefb8
// Addr: 1404aefb8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aefb8(char *param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  uint *in_RAX;
  char cVar8;
  byte bVar9;
  int *unaff_RBX;
  char unaff_SPL;
  char *unaff_RSI;
  ulonglong unaff_RDI;
  char in_CF;
  bool in_OF;
  char *pcVar7;
  
  cVar8 = (char)param_1;
  if (!in_OF) {
    uVar6 = *in_RAX;
    LOCK();
    iVar3 = *unaff_RBX;
    *unaff_RBX = param_2;
    UNLOCK();
    cVar5 = (char)(unaff_RDI & 0xffffffff) + cVar8;
    pcVar7 = (char *)CONCAT71((int7)((unaff_RDI & 0xffffffff) >> 8),cVar5);
    out((short)iVar3,cVar5);
    *param_1 = *param_1 + unaff_SPL;
    *pcVar7 = *pcVar7 + cVar5;
    pcVar7[-0x79] = pcVar7[-0x79] + (char)((uint)iVar3 >> 8);
    LOCK();
    iVar4 = *unaff_RBX;
    *unaff_RBX = iVar3;
    UNLOCK();
    out((short)iVar4,(char)in_RAX + (char)uVar6 + in_CF + cVar8);
    *param_1 = *param_1 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  pbVar1 = (byte *)((longlong)in_RAX + -0x7d);
  bVar2 = *pbVar1;
  bVar9 = (byte)((uint)param_2 >> 8);
  *pbVar1 = *pbVar1 + bVar9;
  *unaff_RBX = *unaff_RBX +
               (uint)(CARRY4((uint)in_RAX,*in_RAX) ||
                     CARRY4((uint)in_RAX + *in_RAX,(uint)CARRY1(bVar2,bVar9)));
  uVar6 = in(0x49);
  *param_1 = *param_1 + (char)(uVar6 >> 8);
  *unaff_RSI = *unaff_RSI + cVar8;
  *(char *)(ulonglong)uVar6 = *(char *)(ulonglong)uVar6 + (char)uVar6;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

