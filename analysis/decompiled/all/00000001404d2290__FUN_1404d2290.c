// Function: FUN_1404d2290
// Addr: 1404d2290
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404d22fd) */
/* WARNING: Removing unreachable block (ram,0x0001404d2259) */

void FUN_1404d2290(char *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  uint *puVar5;
  char *pcVar6;
  byte bVar7;
  uint uVar8;
  char cVar9;
  byte *in_RAX;
  char cVar10;
  
  cVar10 = (char)((ulonglong)param_2 >> 8);
  uVar8 = (uint)in_RAX;
  uRam00000001b4522298 = uRam00000001b4522298 & uVar8;
  bVar7 = (byte)in_RAX;
  *in_RAX = *in_RAX | bVar7;
  *param_1 = *param_1;
  puVar5 = (uint *)((longlong)in_RAX * 2);
  uVar4 = *puVar5;
  *puVar5 = *puVar5 + uVar8;
  *(int *)((longlong)param_1 * 2) =
       *(int *)((longlong)param_1 * 2) + (int)&stack0x00000000 + (uint)CARRY4(uVar4,uVar8);
  pbVar1 = in_RAX + (longlong)param_1;
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + cVar10;
  if (SCARRY1(bVar2,cVar10)) {
    *param_2 = *param_2 ^ bVar7;
    param_1[0x3128004d] = param_1[0x3128004d] + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1;
  *(char *)((longlong)in_RAX * 2) = *(char *)((longlong)in_RAX * 2) + bVar7;
  in_RAX[(longlong)param_1] = in_RAX[(longlong)param_1] + cVar10;
  pcVar6 = (char *)((longlong)param_1 * 2);
  cVar3 = *pcVar6;
  cVar9 = (char)((ulonglong)in_RAX >> 8);
  *pcVar6 = *pcVar6 + cVar9;
  if (!SCARRY1(cVar3,cVar9)) {
    *param_1 = *param_1;
    *in_RAX = *in_RAX + bVar7;
    in_RAX[-0x41] = in_RAX[-0x41] + cVar10;
    *param_1 = *param_1 + bVar7;
    *param_1 = *param_1 + (char)param_2;
    uRam00000001458f2bf7 = uRam00000001458f2bf7 | (uVar8 | 0x680d0003) + 0xc20400;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

