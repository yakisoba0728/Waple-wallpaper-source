// Function: FUN_1404c880c
// Addr: 1404c880c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c880c(longlong param_1,uint *param_2,char param_3)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char cVar4;
  uint *in_RAX;
  char *pcVar5;
  char unaff_BH;
  uint unaff_EDI;
  undefined4 unaff_0000003c;
  char in_ZF;
  
  pcVar5 = (char *)(param_1 + -1);
  if (pcVar5 == (char *)0x0 || in_ZF != '\0') {
    *in_RAX = *in_RAX ^ (uint)in_RAX;
    pcVar1 = (char *)(CONCAT44(unaff_0000003c,unaff_EDI) + 0x21004c);
    cVar4 = (char)in_RAX;
    *pcVar1 = *pcVar1 + cVar4;
    *(char *)in_RAX = (char)*in_RAX + cVar4;
    cVar4 = cVar4 + (char)((ulonglong)in_RAX >> 8);
    in_RAX = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar4);
    *(char *)in_RAX = (char)*in_RAX + (char)param_2;
    LOCK();
    puVar2 = (undefined4 *)((longlong)in_RAX * 2 + 0x21);
    uVar3 = *puVar2;
    *puVar2 = (int)pcVar5;
    pcVar5 = (char *)CONCAT44((int)((ulonglong)pcVar5 >> 0x20),uVar3);
    UNLOCK();
    *(char *)in_RAX = (char)*in_RAX + cVar4;
    *(char *)in_RAX = (char)*in_RAX + (char)param_2;
  }
  *(char *)((longlong)param_2 + 0x1b) = *(char *)((longlong)param_2 + 0x1b) + (char)pcVar5;
  *in_RAX = *in_RAX ^ (uint)in_RAX;
  *pcVar5 = *pcVar5 + param_3;
  *param_2 = *param_2 | (uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + -0x79);
  *pcVar5 = *pcVar5 + (char)pcVar5;
  *(uint *)(pcVar5 + 0xe) = *(uint *)(pcVar5 + 0xe) & unaff_EDI;
  pcVar5[-0x2c] = pcVar5[-0x2c] + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

