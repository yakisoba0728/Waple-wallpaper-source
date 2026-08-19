// Function: FUN_1404bc1ec
// Addr: 1404bc1ec
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404bc215) overlaps instruction at (ram,0x0001404bc213)
    */
/* WARNING: Removing unreachable block (ram,0x0001404bc23d) */

void FUN_1404bc1ec(longlong param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  byte bVar2;
  ulonglong in_RAX;
  undefined7 uVar5;
  byte *pbVar3;
  ulonglong uVar4;
  byte *unaff_RBX;
  char unaff_SPL;
  uint *unaff_RSI;
  uint *puVar6;
  uint *unaff_RDI;
  uint *puVar7;
  uint *puVar8;
  longlong in_FS_OFFSET;
  
  puVar7 = unaff_RDI + 1;
  uVar5 = (undefined7)(in_RAX >> 8);
  if ((uint)in_RAX < *unaff_RDI) {
    pbVar3 = (byte *)(in_RAX ^ 8);
  }
  else {
    bVar1 = (char)in_RAX * '\x02';
    pbVar3 = (byte *)CONCAT71(uVar5,bVar1);
    *unaff_RBX = *unaff_RBX >> 1 | *unaff_RBX << 7;
    *pbVar3 = *pbVar3 + bVar1;
    pbVar3[0x72] = pbVar3[0x72] + (char)(in_RAX >> 8);
    uVar4 = (ulonglong)unaff_RSI & 0xffffffff;
    puVar6 = (uint *)(CONCAT71(uVar5,bVar1 & *pbVar3) & 0xffffffff);
    bVar2 = (byte)uVar4;
    pbVar3 = (byte *)CONCAT62((int6)(uVar4 >> 0x10),CONCAT11((char)(uVar4 >> 8) + bVar2,bVar2));
    puVar8 = unaff_RDI + 2;
    unaff_RSI = puVar6 + 1;
    *puVar7 = *puVar6;
    *param_4 = *param_4 + unaff_SPL;
    *(byte *)unaff_RSI = (char)*unaff_RSI + bVar2;
    bVar1 = *pbVar3;
    *pbVar3 = *pbVar3 + bVar2;
    puVar7 = puVar8;
    if (*pbVar3 == 0) {
      if (CARRY1(bVar1,bVar2)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(char *)((longlong)puVar6 + -0x3bffdd8a) =
           *(char *)((longlong)puVar6 + -0x3bffdd8a) + (char)param_2;
      goto code_r0x0001404bc21d;
    }
  }
  *pbVar3 = *pbVar3 + (byte)pbVar3;
  *(uint *)(pbVar3 + in_FS_OFFSET) = *(uint *)(pbVar3 + in_FS_OFFSET) | (uint)pbVar3;
  pbVar3[param_1] = pbVar3[param_1] + (char)((ulonglong)param_2 >> 8);
  pbVar3[0x72] = pbVar3[0x72] + (char)((ulonglong)pbVar3 >> 8);
  uVar4 = (ulonglong)unaff_RSI & 0xffffffff;
  unaff_RSI = (uint *)(CONCAT71((int7)((ulonglong)pbVar3 >> 8),(byte)pbVar3 & *pbVar3) & 0xffffffff)
  ;
  pbVar3 = (byte *)CONCAT62((int6)(uVar4 >> 0x10),
                            CONCAT11((char)(uVar4 >> 8) + (char)uVar4,(char)uVar4));
  puVar8 = puVar7;
code_r0x0001404bc21d:
  *puVar8 = *unaff_RSI;
  *param_4 = *param_4 + unaff_SPL;
  *(char *)((longlong)pbVar3 * 2) = *(char *)((longlong)pbVar3 * 2) - (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

