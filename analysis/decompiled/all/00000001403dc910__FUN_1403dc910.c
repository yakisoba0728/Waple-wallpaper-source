// Function: FUN_1403dc910
// Addr: 1403dc910
// Size: 857 bytes


void FUN_1403dc910(char *param_1,longlong param_2,uint *param_3,uint *param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  longlong lVar5;
  size_t sVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  
  cVar1 = FUN_1403da0f0();
  if (cVar1 != '\0') {
    return;
  }
  pcVar4 = (char *)FUN_1402bbe10(param_1,0x2d);
  if ((pcVar4 != (char *)0x0) && (5 < param_2 - (longlong)param_1)) {
    lVar5 = FUN_1402bbe10(pcVar4 + 1,0x2d);
    if (lVar5 == 0) {
      sVar6 = strlen(pcVar4 + 1);
    }
    else {
      sVar6 = (lVar5 - (longlong)pcVar4) - 1;
    }
    if ((sVar6 == 3) && (((byte)(pcVar4[1] + 0x9fU) < 0x1a || ((byte)(pcVar4[1] + 0xbfU) < 0x1a))))
    {
      param_1 = pcVar4 + 1;
    }
  }
  lVar5 = FUN_1402bbe10(param_1,0x2d);
  iVar12 = (int)param_1;
  iVar13 = (int)lVar5 - iVar12;
  if (lVar5 == 0) {
    iVar13 = (int)param_2 - iVar12;
  }
  uVar2 = FUN_1404199f0(param_1,iVar13);
  uVar8 = 0;
  uVar11 = 0;
  if (iVar13 == 2) {
    uVar11 = (ulonglong)DAT_1404e5238;
    if ((DAT_1404e5238 < 0xcc) &&
       (*(uint *)(
                 "  aa RFA  ba KBA  fa KFA  ka AKA  ma HMA  na GRA  ra ARA  sa MSA  va RVA  ya MYA  za EZA  ab HSB  eb LEB  gb RGB  ib SIB  ib PPC  mb BMB  nb NEB  ob BIT  rb ERB  sb SOB  ac TAC  ec EHC  hc AHC  oc SOC  rc ERC  sc YSC  uc LSC  vc UHC  yc LEW  ad NAD  ed UED  vd VID  vd VHD  zd NZD  ee EWE  le LLE  ne GNE  oe OTN  se PSE  te ITE  ue QUE  af RAF  ff LUF  if NIF  jf IJF  of SOF  rf ARF  yf IRF  ag IRI  ag TRI  dg EAG  lg LAG  ng AUG  ug JUG  vg XNM  ah UAH  eh RWI  ih NIH  oh OMH  oh PPC  rh VRH  th IAH  th PPC  uh NUH  yh0EYH  yh EYH  zh REH  ai ANI  di DNI  di YLM  ei ELI  gi OBI  ii MIY  ki KPI  ni DNI  ni YLM  oi ODI  si LSI  ti ATI  ui UNI  uiKUNI  wi RWI  aj NAJ  ij IIJ  vj VAJ  wj VAJ  ak TAK  gk0NOK  ik KIK  jk AUK  kk ZAK  lk NRG  mk MHK  nk NAK  ok ROK  ok HOK  rk RNK  sk HSK  uk RUK  vk MOK  wk ROC  yk RIK  al TAL  bl ZTL  gl GUL  il MIL  nl NIL  ol OAL  tl HTL  ul BUL  vl IVL  gm GLM  hm HAM  im IRM  km DKM  lm LAM  lm RLM  nm GNM  om LOM  om MOR  rm RAM  sm YLM  tm STM  ym MRB  an UAN  bn RON  dn BDN  en PEN  gn GDN  ln DLN  nn NYN  on RON  rn BDN  vn VAN  vn HTA  yn IHC  co ICO  jo BJO  mo ORO  ro IRO  so SSO  ap NAP  ip LAP  lp KLP  sp SAP  tp GTP  uq ZUQ  mr SMR  nr NUR  or MOR  ur SUR  wr AUR  as NAS  cs DRS  ds DNS  es MSN  gs OGS  hs SOB  hs VRH  hs BRS  is HNS  ks YKS  ls VLS  ms OMS  ns0ANS  os LMS  qs IQS  rs BRS  ss ZWS  ts TOS  us NUS  vs EVS  ws KWS  at MAT  et LET  gt JAT  ht AHT  it YGT  kt MKT  lt LGT  nt ANT  ot NGT  rt KRT  st GST  tt TAT  wt IWT  wt AKA  yt THT  gu GYU  ku RKU  ru DRU  zu BZU  ev NEV  iv TIV  ov LOV  aw NLW  ow FLW  hx SHX  iy IIJ  oy ABY  az AHZ  hz SHZ  uz LUZ"
                 + uVar11 * 8) == uVar2)) {
LAB_1403dca70:
      DAT_1404e5238 = (uint)uVar11;
      uVar2 = DAT_1404e5238;
      do {
        uVar7 = uVar11;
        if (uVar2 == 0) break;
        uVar2 = (int)uVar7 - 1;
        uVar11 = (ulonglong)uVar2;
      } while (*(int *)(
                       "  aa RFA  ba KBA  fa KFA  ka AKA  ma HMA  na GRA  ra ARA  sa MSA  va RVA  ya MYA  za EZA  ab HSB  eb LEB  gb RGB  ib SIB  ib PPC  mb BMB  nb NEB  ob BIT  rb ERB  sb SOB  ac TAC  ec EHC  hc AHC  oc SOC  rc ERC  sc YSC  uc LSC  vc UHC  yc LEW  ad NAD  ed UED  vd VID  vd VHD  zd NZD  ee EWE  le LLE  ne GNE  oe OTN  se PSE  te ITE  ue QUE  af RAF  ff LUF  if NIF  jf IJF  of SOF  rf ARF  yf IRF  ag IRI  ag TRI  dg EAG  lg LAG  ng AUG  ug JUG  vg XNM  ah UAH  eh RWI  ih NIH  oh OMH  oh PPC  rh VRH  th IAH  th PPC  uh NUH  yh0EYH  yh EYH  zh REH  ai ANI  di DNI  di YLM  ei ELI  gi OBI  ii MIY  ki KPI  ni DNI  ni YLM  oi ODI  si LSI  ti ATI  ui UNI  uiKUNI  wi RWI  aj NAJ  ij IIJ  vj VAJ  wj VAJ  ak TAK  gk0NOK  ik KIK  jk AUK  kk ZAK  lk NRG  mk MHK  nk NAK  ok ROK  ok HOK  rk RNK  sk HSK  uk RUK  vk MOK  wk ROC  yk RIK  al TAL  bl ZTL  gl GUL  il MIL  nl NIL  ol OAL  tl HTL  ul BUL  vl IVL  gm GLM  hm HAM  im IRM  km DKM  lm LAM  lm RLM  nm GNM  om LOM  om MOR  rm RAM  sm YLM  tm STM  ym MRB  an UAN  bn RON  dn BDN  en PEN  gn GDN  ln DLN  nn NYN  on RON  rn BDN  vn VAN  vn HTA  yn IHC  co ICO  jo BJO  mo ORO  ro IRO  so SSO  ap NAP  ip LAP  lp KLP  sp SAP  tp GTP  uq ZUQ  mr SMR  nr NUR  or MOR  ur SUR  wr AUR  as NAS  cs DRS  ds DNS  es MSN  gs OGS  hs SOB  hs VRH  hs BRS  is HNS  ks YKS  ls VLS  ms OMS  ns0ANS  os LMS  qs IQS  rs BRS  ss ZWS  ts TOS  us NUS  vs EVS  ws KWS  at MAT  et LET  gt JAT  ht AHT  it YGT  kt MKT  lt LGT  nt ANT  ot NGT  rt KRT  st GST  tt TAT  wt IWT  wt AKA  yt THT  gu GYU  ku RKU  ru DRU  zu BZU  ev NEV  iv TIV  ov LOV  aw NLW  ow FLW  hx SHX  iy IIJ  oy ABY  az AHZ  hz SHZ  uz LUZ"
                       + uVar7 * 8) ==
               *(int *)(
                       "  aa RFA  ba KBA  fa KFA  ka AKA  ma HMA  na GRA  ra ARA  sa MSA  va RVA  ya MYA  za EZA  ab HSB  eb LEB  gb RGB  ib SIB  ib PPC  mb BMB  nb NEB  ob BIT  rb ERB  sb SOB  ac TAC  ec EHC  hc AHC  oc SOC  rc ERC  sc YSC  uc LSC  vc UHC  yc LEW  ad NAD  ed UED  vd VID  vd VHD  zd NZD  ee EWE  le LLE  ne GNE  oe OTN  se PSE  te ITE  ue QUE  af RAF  ff LUF  if NIF  jf IJF  of SOF  rf ARF  yf IRF  ag IRI  ag TRI  dg EAG  lg LAG  ng AUG  ug JUG  vg XNM  ah UAH  eh RWI  ih NIH  oh OMH  oh PPC  rh VRH  th IAH  th PPC  uh NUH  yh0EYH  yh EYH  zh REH  ai ANI  di DNI  di YLM  ei ELI  gi OBI  ii MIY  ki KPI  ni DNI  ni YLM  oi ODI  si LSI  ti ATI  ui UNI  uiKUNI  wi RWI  aj NAJ  ij IIJ  vj VAJ  wj VAJ  ak TAK  gk0NOK  ik KIK  jk AUK  kk ZAK  lk NRG  mk MHK  nk NAK  ok ROK  ok HOK  rk RNK  sk HSK  uk RUK  vk MOK  wk ROC  yk RIK  al TAL  bl ZTL  gl GUL  il MIL  nl NIL  ol OAL  tl HTL  ul BUL  vl IVL  gm GLM  hm HAM  im IRM  km DKM  lm LAM  lm RLM  nm GNM  om LOM  om MOR  rm RAM  sm YLM  tm STM  ym MRB  an UAN  bn RON  dn BDN  en PEN  gn GDN  ln DLN  nn NYN  on RON  rn BDN  vn VAN  vn HTA  yn IHC  co ICO  jo BJO  mo ORO  ro IRO  so SSO  ap NAP  ip LAP  lp KLP  sp SAP  tp GTP  uq ZUQ  mr SMR  nr NUR  or MOR  ur SUR  wr AUR  as NAS  cs DRS  ds DNS  es MSN  gs OGS  hs SOB  hs VRH  hs BRS  is HNS  ks YKS  ls VLS  ms OMS  ns0ANS  os LMS  qs IQS  rs BRS  ss ZWS  ts TOS  us NUS  vs EVS  ws KWS  at MAT  et LET  gt JAT  ht AHT  it YGT  kt MKT  lt LGT  nt ANT  ot NGT  rt KRT  st GST  tt TAT  wt IWT  wt AKA  yt THT  gu GYU  ku RKU  ru DRU  zu BZU  ev NEV  iv TIV  ov LOV  aw NLW  ow FLW  hx SHX  iy IIJ  oy ABY  az AHZ  hz SHZ  uz LUZ"
                       + (ulonglong)uVar2 * 8));
      uVar11 = uVar8;
      if (*param_3 != 0) {
        while( true ) {
          uVar2 = (int)uVar8 + (int)uVar7;
          uVar11 = uVar8;
          if (0xcb < uVar2) break;
          lVar5 = (ulonglong)uVar2 * 8;
          if ((*(uint *)(
                        "  aa RFA  ba KBA  fa KFA  ka AKA  ma HMA  na GRA  ra ARA  sa MSA  va RVA  ya MYA  za EZA  ab HSB  eb LEB  gb RGB  ib SIB  ib PPC  mb BMB  nb NEB  ob BIT  rb ERB  sb SOB  ac TAC  ec EHC  hc AHC  oc SOC  rc ERC  sc YSC  uc LSC  vc UHC  yc LEW  ad NAD  ed UED  vd VID  vd VHD  zd NZD  ee EWE  le LLE  ne GNE  oe OTN  se PSE  te ITE  ue QUE  af RAF  ff LUF  if NIF  jf IJF  of SOF  rf ARF  yf IRF  ag IRI  ag TRI  dg EAG  lg LAG  ng AUG  ug JUG  vg XNM  ah UAH  eh RWI  ih NIH  oh OMH  oh PPC  rh VRH  th IAH  th PPC  uh NUH  yh0EYH  yh EYH  zh REH  ai ANI  di DNI  di YLM  ei ELI  gi OBI  ii MIY  ki KPI  ni DNI  ni YLM  oi ODI  si LSI  ti ATI  ui UNI  uiKUNI  wi RWI  aj NAJ  ij IIJ  vj VAJ  wj VAJ  ak TAK  gk0NOK  ik KIK  jk AUK  kk ZAK  lk NRG  mk MHK  nk NAK  ok ROK  ok HOK  rk RNK  sk HSK  uk RUK  vk MOK  wk ROC  yk RIK  al TAL  bl ZTL  gl GUL  il MIL  nl NIL  ol OAL  tl HTL  ul BUL  vl IVL  gm GLM  hm HAM  im IRM  km DKM  lm LAM  lm RLM  nm GNM  om LOM  om MOR  rm RAM  sm YLM  tm STM  ym MRB  an UAN  bn RON  dn BDN  en PEN  gn GDN  ln DLN  nn NYN  on RON  rn BDN  vn VAN  vn HTA  yn IHC  co ICO  jo BJO  mo ORO  ro IRO  so SSO  ap NAP  ip LAP  lp KLP  sp SAP  tp GTP  uq ZUQ  mr SMR  nr NUR  or MOR  ur SUR  wr AUR  as NAS  cs DRS  ds DNS  es MSN  gs OGS  hs SOB  hs VRH  hs BRS  is HNS  ks YKS  ls VLS  ms OMS  ns0ANS  os LMS  qs IQS  rs BRS  ss ZWS  ts TOS  us NUS  vs EVS  ws KWS  at MAT  et LET  gt JAT  ht AHT  it YGT  kt MKT  lt LGT  nt ANT  ot NGT  rt KRT  st GST  tt TAT  wt IWT  wt AKA  yt THT  gu GYU  ku RKU  ru DRU  zu BZU  ev NEV  iv TIV  ov LOV  aw NLW  ow FLW  hx SHX  iy IIJ  oy ABY  az AHZ  hz SHZ  uz LUZ"
                        + lVar5 + 4) == 0) ||
             (*(int *)(
                      "  aa RFA  ba KBA  fa KFA  ka AKA  ma HMA  na GRA  ra ARA  sa MSA  va RVA  ya MYA  za EZA  ab HSB  eb LEB  gb RGB  ib SIB  ib PPC  mb BMB  nb NEB  ob BIT  rb ERB  sb SOB  ac TAC  ec EHC  hc AHC  oc SOC  rc ERC  sc YSC  uc LSC  vc UHC  yc LEW  ad NAD  ed UED  vd VID  vd VHD  zd NZD  ee EWE  le LLE  ne GNE  oe OTN  se PSE  te ITE  ue QUE  af RAF  ff LUF  if NIF  jf IJF  of SOF  rf ARF  yf IRF  ag IRI  ag TRI  dg EAG  lg LAG  ng AUG  ug JUG  vg XNM  ah UAH  eh RWI  ih NIH  oh OMH  oh PPC  rh VRH  th IAH  th PPC  uh NUH  yh0EYH  yh EYH  zh REH  ai ANI  di DNI  di YLM  ei ELI  gi OBI  ii MIY  ki KPI  ni DNI  ni YLM  oi ODI  si LSI  ti ATI  ui UNI  uiKUNI  wi RWI  aj NAJ  ij IIJ  vj VAJ  wj VAJ  ak TAK  gk0NOK  ik KIK  jk AUK  kk ZAK  lk NRG  mk MHK  nk NAK  ok ROK  ok HOK  rk RNK  sk HSK  uk RUK  vk MOK  wk ROC  yk RIK  al TAL  bl ZTL  gl GUL  il MIL  nl NIL  ol OAL  tl HTL  ul BUL  vl IVL  gm GLM  hm HAM  im IRM  km DKM  lm LAM  lm RLM  nm GNM  om LOM  om MOR  rm RAM  sm YLM  tm STM  ym MRB  an UAN  bn RON  dn BDN  en PEN  gn GDN  ln DLN  nn NYN  on RON  rn BDN  vn VAN  vn HTA  yn IHC  co ICO  jo BJO  mo ORO  ro IRO  so SSO  ap NAP  ip LAP  lp KLP  sp SAP  tp GTP  uq ZUQ  mr SMR  nr NUR  or MOR  ur SUR  wr AUR  as NAS  cs DRS  ds DNS  es MSN  gs OGS  hs SOB  hs VRH  hs BRS  is HNS  ks YKS  ls VLS  ms OMS  ns0ANS  os LMS  qs IQS  rs BRS  ss ZWS  ts TOS  us NUS  vs EVS  ws KWS  at MAT  et LET  gt JAT  ht AHT  it YGT  kt MKT  lt LGT  nt ANT  ot NGT  rt KRT  st GST  tt TAT  wt IWT  wt AKA  yt THT  gu GYU  ku RKU  ru DRU  zu BZU  ev NEV  iv TIV  ov LOV  aw NLW  ow FLW  hx SHX  iy IIJ  oy ABY  az AHZ  hz SHZ  uz LUZ"
                      + lVar5) !=
              *(int *)(
                      "  aa RFA  ba KBA  fa KFA  ka AKA  ma HMA  na GRA  ra ARA  sa MSA  va RVA  ya MYA  za EZA  ab HSB  eb LEB  gb RGB  ib SIB  ib PPC  mb BMB  nb NEB  ob BIT  rb ERB  sb SOB  ac TAC  ec EHC  hc AHC  oc SOC  rc ERC  sc YSC  uc LSC  vc UHC  yc LEW  ad NAD  ed UED  vd VID  vd VHD  zd NZD  ee EWE  le LLE  ne GNE  oe OTN  se PSE  te ITE  ue QUE  af RAF  ff LUF  if NIF  jf IJF  of SOF  rf ARF  yf IRF  ag IRI  ag TRI  dg EAG  lg LAG  ng AUG  ug JUG  vg XNM  ah UAH  eh RWI  ih NIH  oh OMH  oh PPC  rh VRH  th IAH  th PPC  uh NUH  yh0EYH  yh EYH  zh REH  ai ANI  di DNI  di YLM  ei ELI  gi OBI  ii MIY  ki KPI  ni DNI  ni YLM  oi ODI  si LSI  ti ATI  ui UNI  uiKUNI  wi RWI  aj NAJ  ij IIJ  vj VAJ  wj VAJ  ak TAK  gk0NOK  ik KIK  jk AUK  kk ZAK  lk NRG  mk MHK  nk NAK  ok ROK  ok HOK  rk RNK  sk HSK  uk RUK  vk MOK  wk ROC  yk RIK  al TAL  bl ZTL  gl GUL  il MIL  nl NIL  ol OAL  tl HTL  ul BUL  vl IVL  gm GLM  hm HAM  im IRM  km DKM  lm LAM  lm RLM  nm GNM  om LOM  om MOR  rm RAM  sm YLM  tm STM  ym MRB  an UAN  bn RON  dn BDN  en PEN  gn GDN  ln DLN  nn NYN  on RON  rn BDN  vn VAN  vn HTA  yn IHC  co ICO  jo BJO  mo ORO  ro IRO  so SSO  ap NAP  ip LAP  lp KLP  sp SAP  tp GTP  uq ZUQ  mr SMR  nr NUR  or MOR  ur SUR  wr AUR  as NAS  cs DRS  ds DNS  es MSN  gs OGS  hs SOB  hs VRH  hs BRS  is HNS  ks YKS  ls VLS  ms OMS  ns0ANS  os LMS  qs IQS  rs BRS  ss ZWS  ts TOS  us NUS  vs EVS  ws KWS  at MAT  et LET  gt JAT  ht AHT  it YGT  kt MKT  lt LGT  nt ANT  ot NGT  rt KRT  st GST  tt TAT  wt IWT  wt AKA  yt THT  gu GYU  ku RKU  ru DRU  zu BZU  ev NEV  iv TIV  ov LOV  aw NLW  ow FLW  hx SHX  iy IIJ  oy ABY  az AHZ  hz SHZ  uz LUZ"
                      + uVar7 * 8))) break;
          param_4[uVar8] =
               *(uint *)(
                        "  aa RFA  ba KBA  fa KFA  ka AKA  ma HMA  na GRA  ra ARA  sa MSA  va RVA  ya MYA  za EZA  ab HSB  eb LEB  gb RGB  ib SIB  ib PPC  mb BMB  nb NEB  ob BIT  rb ERB  sb SOB  ac TAC  ec EHC  hc AHC  oc SOC  rc ERC  sc YSC  uc LSC  vc UHC  yc LEW  ad NAD  ed UED  vd VID  vd VHD  zd NZD  ee EWE  le LLE  ne GNE  oe OTN  se PSE  te ITE  ue QUE  af RAF  ff LUF  if NIF  jf IJF  of SOF  rf ARF  yf IRF  ag IRI  ag TRI  dg EAG  lg LAG  ng AUG  ug JUG  vg XNM  ah UAH  eh RWI  ih NIH  oh OMH  oh PPC  rh VRH  th IAH  th PPC  uh NUH  yh0EYH  yh EYH  zh REH  ai ANI  di DNI  di YLM  ei ELI  gi OBI  ii MIY  ki KPI  ni DNI  ni YLM  oi ODI  si LSI  ti ATI  ui UNI  uiKUNI  wi RWI  aj NAJ  ij IIJ  vj VAJ  wj VAJ  ak TAK  gk0NOK  ik KIK  jk AUK  kk ZAK  lk NRG  mk MHK  nk NAK  ok ROK  ok HOK  rk RNK  sk HSK  uk RUK  vk MOK  wk ROC  yk RIK  al TAL  bl ZTL  gl GUL  il MIL  nl NIL  ol OAL  tl HTL  ul BUL  vl IVL  gm GLM  hm HAM  im IRM  km DKM  lm LAM  lm RLM  nm GNM  om LOM  om MOR  rm RAM  sm YLM  tm STM  ym MRB  an UAN  bn RON  dn BDN  en PEN  gn GDN  ln DLN  nn NYN  on RON  rn BDN  vn VAN  vn HTA  yn IHC  co ICO  jo BJO  mo ORO  ro IRO  so SSO  ap NAP  ip LAP  lp KLP  sp SAP  tp GTP  uq ZUQ  mr SMR  nr NUR  or MOR  ur SUR  wr AUR  as NAS  cs DRS  ds DNS  es MSN  gs OGS  hs SOB  hs VRH  hs BRS  is HNS  ks YKS  ls VLS  ms OMS  ns0ANS  os LMS  qs IQS  rs BRS  ss ZWS  ts TOS  us NUS  vs EVS  ws KWS  at MAT  et LET  gt JAT  ht AHT  it YGT  kt MKT  lt LGT  nt ANT  ot NGT  rt KRT  st GST  tt TAT  wt IWT  wt AKA  yt THT  gu GYU  ku RKU  ru DRU  zu BZU  ev NEV  iv TIV  ov LOV  aw NLW  ow FLW  hx SHX  iy IIJ  oy ABY  az AHZ  hz SHZ  uz LUZ"
                        + lVar5 + 4);
          uVar2 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar2;
          uVar11 = uVar8;
          if (*param_3 <= uVar2) break;
        }
      }
      goto LAB_1403dcae0;
    }
    iVar13 = 0xcb;
    uVar7 = uVar8;
    do {
      uVar3 = (uint)(iVar13 + (int)uVar7) >> 1;
      uVar11 = (ulonglong)uVar3;
      if (uVar2 < *(uint *)(
                           "  aa RFA  ba KBA  fa KFA  ka AKA  ma HMA  na GRA  ra ARA  sa MSA  va RVA  ya MYA  za EZA  ab HSB  eb LEB  gb RGB  ib SIB  ib PPC  mb BMB  nb NEB  ob BIT  rb ERB  sb SOB  ac TAC  ec EHC  hc AHC  oc SOC  rc ERC  sc YSC  uc LSC  vc UHC  yc LEW  ad NAD  ed UED  vd VID  vd VHD  zd NZD  ee EWE  le LLE  ne GNE  oe OTN  se PSE  te ITE  ue QUE  af RAF  ff LUF  if NIF  jf IJF  of SOF  rf ARF  yf IRF  ag IRI  ag TRI  dg EAG  lg LAG  ng AUG  ug JUG  vg XNM  ah UAH  eh RWI  ih NIH  oh OMH  oh PPC  rh VRH  th IAH  th PPC  uh NUH  yh0EYH  yh EYH  zh REH  ai ANI  di DNI  di YLM  ei ELI  gi OBI  ii MIY  ki KPI  ni DNI  ni YLM  oi ODI  si LSI  ti ATI  ui UNI  uiKUNI  wi RWI  aj NAJ  ij IIJ  vj VAJ  wj VAJ  ak TAK  gk0NOK  ik KIK  jk AUK  kk ZAK  lk NRG  mk MHK  nk NAK  ok ROK  ok HOK  rk RNK  sk HSK  uk RUK  vk MOK  wk ROC  yk RIK  al TAL  bl ZTL  gl GUL  il MIL  nl NIL  ol OAL  tl HTL  ul BUL  vl IVL  gm GLM  hm HAM  im IRM  km DKM  lm LAM  lm RLM  nm GNM  om LOM  om MOR  rm RAM  sm YLM  tm STM  ym MRB  an UAN  bn RON  dn BDN  en PEN  gn GDN  ln DLN  nn NYN  on RON  rn BDN  vn VAN  vn HTA  yn IHC  co ICO  jo BJO  mo ORO  ro IRO  so SSO  ap NAP  ip LAP  lp KLP  sp SAP  tp GTP  uq ZUQ  mr SMR  nr NUR  or MOR  ur SUR  wr AUR  as NAS  cs DRS  ds DNS  es MSN  gs OGS  hs SOB  hs VRH  hs BRS  is HNS  ks YKS  ls VLS  ms OMS  ns0ANS  os LMS  qs IQS  rs BRS  ss ZWS  ts TOS  us NUS  vs EVS  ws KWS  at MAT  et LET  gt JAT  ht AHT  it YGT  kt MKT  lt LGT  nt ANT  ot NGT  rt KRT  st GST  tt TAT  wt IWT  wt AKA  yt THT  gu GYU  ku RKU  ru DRU  zu BZU  ev NEV  iv TIV  ov LOV  aw NLW  ow FLW  hx SHX  iy IIJ  oy ABY  az AHZ  hz SHZ  uz LUZ"
                           + (ulonglong)uVar3 * 8)) {
        iVar13 = uVar3 - 1;
      }
      else {
        if (uVar2 <= *(uint *)(
                              "  aa RFA  ba KBA  fa KFA  ka AKA  ma HMA  na GRA  ra ARA  sa MSA  va RVA  ya MYA  za EZA  ab HSB  eb LEB  gb RGB  ib SIB  ib PPC  mb BMB  nb NEB  ob BIT  rb ERB  sb SOB  ac TAC  ec EHC  hc AHC  oc SOC  rc ERC  sc YSC  uc LSC  vc UHC  yc LEW  ad NAD  ed UED  vd VID  vd VHD  zd NZD  ee EWE  le LLE  ne GNE  oe OTN  se PSE  te ITE  ue QUE  af RAF  ff LUF  if NIF  jf IJF  of SOF  rf ARF  yf IRF  ag IRI  ag TRI  dg EAG  lg LAG  ng AUG  ug JUG  vg XNM  ah UAH  eh RWI  ih NIH  oh OMH  oh PPC  rh VRH  th IAH  th PPC  uh NUH  yh0EYH  yh EYH  zh REH  ai ANI  di DNI  di YLM  ei ELI  gi OBI  ii MIY  ki KPI  ni DNI  ni YLM  oi ODI  si LSI  ti ATI  ui UNI  uiKUNI  wi RWI  aj NAJ  ij IIJ  vj VAJ  wj VAJ  ak TAK  gk0NOK  ik KIK  jk AUK  kk ZAK  lk NRG  mk MHK  nk NAK  ok ROK  ok HOK  rk RNK  sk HSK  uk RUK  vk MOK  wk ROC  yk RIK  al TAL  bl ZTL  gl GUL  il MIL  nl NIL  ol OAL  tl HTL  ul BUL  vl IVL  gm GLM  hm HAM  im IRM  km DKM  lm LAM  lm RLM  nm GNM  om LOM  om MOR  rm RAM  sm YLM  tm STM  ym MRB  an UAN  bn RON  dn BDN  en PEN  gn GDN  ln DLN  nn NYN  on RON  rn BDN  vn VAN  vn HTA  yn IHC  co ICO  jo BJO  mo ORO  ro IRO  so SSO  ap NAP  ip LAP  lp KLP  sp SAP  tp GTP  uq ZUQ  mr SMR  nr NUR  or MOR  ur SUR  wr AUR  as NAS  cs DRS  ds DNS  es MSN  gs OGS  hs SOB  hs VRH  hs BRS  is HNS  ks YKS  ls VLS  ms OMS  ns0ANS  os LMS  qs IQS  rs BRS  ss ZWS  ts TOS  us NUS  vs EVS  ws KWS  at MAT  et LET  gt JAT  ht AHT  it YGT  kt MKT  lt LGT  nt ANT  ot NGT  rt KRT  st GST  tt TAT  wt IWT  wt AKA  yt THT  gu GYU  ku RKU  ru DRU  zu BZU  ev NEV  iv TIV  ov LOV  aw NLW  ow FLW  hx SHX  iy IIJ  oy ABY  az AHZ  hz SHZ  uz LUZ"
                              + (ulonglong)uVar3 * 8)) goto LAB_1403dca70;
        uVar7 = (ulonglong)(uVar3 + 1);
      }
    } while ((int)uVar7 <= iVar13);
  }
  else if (iVar13 == 3) {
    uVar7 = (ulonglong)DAT_1404e523c;
    if ((DAT_1404e523c < 0x30b) &&
       (*(uint *)(
                 " eaa IQS oaa ARA taa IQS hba ARA qba ABA sba PPC vba ARA mca ARA qca ARA wca ARA xca ARA ada GND fda ARA pda NZD bea ARA cea ARA bfa ARA sfa PPC uga NYM gha WGA tha HTA gia PPC wia IRA pja ARA tja ARA nla IQS sla IQS fma NBH wma RYS aoa PPC apa HTA cpa ARA dpa ARA jpa HTA kpa HTA lpa HTA mpa HTA wpa HTA bra ARA nra PAM qra ARA sra ARA zra ARA jta RCR vta TLA jua RBB zua ARA lva ARA cya MYA hya ARA lya ARA nya ARA pya ARA rya MYA dza HAN jza EZA nza HAN zza HAN dab0DAB hab PPC iab LMB lab ILB jbb LMB pbb0DAB zbb ARA ccb ILB icb UAB lcb KIB qcb HCB rcb HTA aeb HTA beb ITB reb RBB web PPC lfb0DAB qfb DAB tfb TLB ufb HAL yfb GAB ngb ILB pgb ILB rgb NIQ bhb IHB khb KIB rhb GLM nib ODE uib NIQ njb YLM ojb0DAB qjb GLM sjb PPC tjb NLB okb LMB alb FKB elb NLB glb ABI nlb KIB mmb GLM dpb0DAB lpb PPC qpb PPC iqb CRL kqb0DAB arb IRB crb PPC btb ITB jtb YLM otb KIB mub ITB evb YLM uvb YLM ewb NRK kxb HUL oxb PPC pxb ITB rxb UBR nyb LIB czb GLM jzb PPC kzb PPC aac NYM cac NYM lbc NIQ lcc PPC mcc PPC occNHCC qcc KRA odc SHZ kec NIQ yec NIQ fhc NYM jhcNHCC khc0KHC nhc PPC qhcNHCC zhcNHCC wic BJO yjc SHZ akc NIQ bkc RUK nkc NIQ skc PPC tkc KHC zkc NYM clc HTA dlc RYS elcNHCC jlc NIQ slc NAS tlc NIQ nmc SHZ rmc NIQ bnc NIQ hnc NIQ knc NIQ lncNHCC pnc SHZ rnc BRS tncNHCC unc RBB wnc NIQ aoc YLM boc NYM qoc HTA apcNHCC epc PPC fpc PPC ipc PPC xpc SHZ dqc NMH hrc TRC irc PPC prc PPC src PPC ascNHCC hsc NIQ jsc NIQ oscNHCC psc SHZ vsc NIQ ysc NIQ ctc HTA dtc NIQ etcNHCC htc NIQ ltcNHCC stc KIB utc NYM cucNHCC nvcNHCC hzc SHZ ozc SHZ tzc NIQ oad NIQ pad SIN rcd PPC ped PPC rgd HTA dhd WAM bid KND kid KND nid KND pid KND wid KND ejd RJD kjd PPC rjd0RJD skd KND gnd NUD iod RGD hrd GNM bsd BSL ytd PEN pud YLM kwd IUK uwd JUD ywd JUD uyd LUJ kke ITE yke NRK yme NYM bne LAK fne ENF hne ENT gse NOG ise KPI kse KPI ote ITB eve NVE nve KVE owe ITB oye LAK baf PPC lbf KIB mff LUF lif LIP gnf PPC epf PPC buf LUF cuf LUF euf LUF huf LUF iuf LUF quf LUF ruf LRF aag DAG cag PPC nag SHZ xag ORO zag ORO mbg WAG ecg HTA fcg PPC lcg PPC rcg PPC adg JAR..." /* TRUNCATED STRING LITERAL */
                 + uVar7 * 8) == uVar2)) {
LAB_1403dcc45:
      DAT_1404e523c = (uint)uVar7;
      if (*param_3 != 0) {
        *param_4 = *(uint *)(
                            " eaa IQS oaa ARA taa IQS hba ARA qba ABA sba PPC vba ARA mca ARA qca ARA wca ARA xca ARA ada GND fda ARA pda NZD bea ARA cea ARA bfa ARA sfa PPC uga NYM gha WGA tha HTA gia PPC wia IRA pja ARA tja ARA nla IQS sla IQS fma NBH wma RYS aoa PPC apa HTA cpa ARA dpa ARA jpa HTA kpa HTA lpa HTA mpa HTA wpa HTA bra ARA nra PAM qra ARA sra ARA zra ARA jta RCR vta TLA jua RBB zua ARA lva ARA cya MYA hya ARA lya ARA nya ARA pya ARA rya MYA dza HAN jza EZA nza HAN zza HAN dab0DAB hab PPC iab LMB lab ILB jbb LMB pbb0DAB zbb ARA ccb ILB icb UAB lcb KIB qcb HCB rcb HTA aeb HTA beb ITB reb RBB web PPC lfb0DAB qfb DAB tfb TLB ufb HAL yfb GAB ngb ILB pgb ILB rgb NIQ bhb IHB khb KIB rhb GLM nib ODE uib NIQ njb YLM ojb0DAB qjb GLM sjb PPC tjb NLB okb LMB alb FKB elb NLB glb ABI nlb KIB mmb GLM dpb0DAB lpb PPC qpb PPC iqb CRL kqb0DAB arb IRB crb PPC btb ITB jtb YLM otb KIB mub ITB evb YLM uvb YLM ewb NRK kxb HUL oxb PPC pxb ITB rxb UBR nyb LIB czb GLM jzb PPC kzb PPC aac NYM cac NYM lbc NIQ lcc PPC mcc PPC occNHCC qcc KRA odc SHZ kec NIQ yec NIQ fhc NYM jhcNHCC khc0KHC nhc PPC qhcNHCC zhcNHCC wic BJO yjc SHZ akc NIQ bkc RUK nkc NIQ skc PPC tkc KHC zkc NYM clc HTA dlc RYS elcNHCC jlc NIQ slc NAS tlc NIQ nmc SHZ rmc NIQ bnc NIQ hnc NIQ knc NIQ lncNHCC pnc SHZ rnc BRS tncNHCC unc RBB wnc NIQ aoc YLM boc NYM qoc HTA apcNHCC epc PPC fpc PPC ipc PPC xpc SHZ dqc NMH hrc TRC irc PPC prc PPC src PPC ascNHCC hsc NIQ jsc NIQ oscNHCC psc SHZ vsc NIQ ysc NIQ ctc HTA dtc NIQ etcNHCC htc NIQ ltcNHCC stc KIB utc NYM cucNHCC nvcNHCC hzc SHZ ozc SHZ tzc NIQ oad NIQ pad SIN rcd PPC ped PPC rgd HTA dhd WAM bid KND kid KND nid KND pid KND wid KND ejd RJD kjd PPC rjd0RJD skd KND gnd NUD iod RGD hrd GNM bsd BSL ytd PEN pud YLM kwd IUK uwd JUD ywd JUD uyd LUJ kke ITE yke NRK yme NYM bne LAK fne ENF hne ENT gse NOG ise KPI kse KPI ote ITB eve NVE nve KVE owe ITB oye LAK baf PPC lbf KIB mff LUF lif LIP gnf PPC epf PPC buf LUF cuf LUF euf LUF huf LUF iuf LUF quf LUF ruf LRF aag DAG cag PPC nag SHZ xag ORO zag ORO mbg WAG ecg HTA fcg PPC lcg PPC rcg PPC adg JAR..." /* TRUNCATED STRING LITERAL */
                            + uVar7 * 8 + 4);
        uVar11 = 1;
      }
    }
    else {
      iVar13 = 0x30a;
      uVar10 = uVar8;
      do {
        uVar3 = (uint)(iVar13 + (int)uVar10) >> 1;
        uVar7 = (ulonglong)uVar3;
        if (uVar2 < *(uint *)(
                             " eaa IQS oaa ARA taa IQS hba ARA qba ABA sba PPC vba ARA mca ARA qca ARA wca ARA xca ARA ada GND fda ARA pda NZD bea ARA cea ARA bfa ARA sfa PPC uga NYM gha WGA tha HTA gia PPC wia IRA pja ARA tja ARA nla IQS sla IQS fma NBH wma RYS aoa PPC apa HTA cpa ARA dpa ARA jpa HTA kpa HTA lpa HTA mpa HTA wpa HTA bra ARA nra PAM qra ARA sra ARA zra ARA jta RCR vta TLA jua RBB zua ARA lva ARA cya MYA hya ARA lya ARA nya ARA pya ARA rya MYA dza HAN jza EZA nza HAN zza HAN dab0DAB hab PPC iab LMB lab ILB jbb LMB pbb0DAB zbb ARA ccb ILB icb UAB lcb KIB qcb HCB rcb HTA aeb HTA beb ITB reb RBB web PPC lfb0DAB qfb DAB tfb TLB ufb HAL yfb GAB ngb ILB pgb ILB rgb NIQ bhb IHB khb KIB rhb GLM nib ODE uib NIQ njb YLM ojb0DAB qjb GLM sjb PPC tjb NLB okb LMB alb FKB elb NLB glb ABI nlb KIB mmb GLM dpb0DAB lpb PPC qpb PPC iqb CRL kqb0DAB arb IRB crb PPC btb ITB jtb YLM otb KIB mub ITB evb YLM uvb YLM ewb NRK kxb HUL oxb PPC pxb ITB rxb UBR nyb LIB czb GLM jzb PPC kzb PPC aac NYM cac NYM lbc NIQ lcc PPC mcc PPC occNHCC qcc KRA odc SHZ kec NIQ yec NIQ fhc NYM jhcNHCC khc0KHC nhc PPC qhcNHCC zhcNHCC wic BJO yjc SHZ akc NIQ bkc RUK nkc NIQ skc PPC tkc KHC zkc NYM clc HTA dlc RYS elcNHCC jlc NIQ slc NAS tlc NIQ nmc SHZ rmc NIQ bnc NIQ hnc NIQ knc NIQ lncNHCC pnc SHZ rnc BRS tncNHCC unc RBB wnc NIQ aoc YLM boc NYM qoc HTA apcNHCC epc PPC fpc PPC ipc PPC xpc SHZ dqc NMH hrc TRC irc PPC prc PPC src PPC ascNHCC hsc NIQ jsc NIQ oscNHCC psc SHZ vsc NIQ ysc NIQ ctc HTA dtc NIQ etcNHCC htc NIQ ltcNHCC stc KIB utc NYM cucNHCC nvcNHCC hzc SHZ ozc SHZ tzc NIQ oad NIQ pad SIN rcd PPC ped PPC rgd HTA dhd WAM bid KND kid KND nid KND pid KND wid KND ejd RJD kjd PPC rjd0RJD skd KND gnd NUD iod RGD hrd GNM bsd BSL ytd PEN pud YLM kwd IUK uwd JUD ywd JUD uyd LUJ kke ITE yke NRK yme NYM bne LAK fne ENF hne ENT gse NOG ise KPI kse KPI ote ITB eve NVE nve KVE owe ITB oye LAK baf PPC lbf KIB mff LUF lif LIP gnf PPC epf PPC buf LUF cuf LUF euf LUF huf LUF iuf LUF quf LUF ruf LRF aag DAG cag PPC nag SHZ xag ORO zag ORO mbg WAG ecg HTA fcg PPC lcg PPC rcg PPC adg JAR..." /* TRUNCATED STRING LITERAL */
                             + (ulonglong)uVar3 * 8)) {
          iVar13 = uVar3 - 1;
        }
        else {
          if (uVar2 <= *(uint *)(
                                " eaa IQS oaa ARA taa IQS hba ARA qba ABA sba PPC vba ARA mca ARA qca ARA wca ARA xca ARA ada GND fda ARA pda NZD bea ARA cea ARA bfa ARA sfa PPC uga NYM gha WGA tha HTA gia PPC wia IRA pja ARA tja ARA nla IQS sla IQS fma NBH wma RYS aoa PPC apa HTA cpa ARA dpa ARA jpa HTA kpa HTA lpa HTA mpa HTA wpa HTA bra ARA nra PAM qra ARA sra ARA zra ARA jta RCR vta TLA jua RBB zua ARA lva ARA cya MYA hya ARA lya ARA nya ARA pya ARA rya MYA dza HAN jza EZA nza HAN zza HAN dab0DAB hab PPC iab LMB lab ILB jbb LMB pbb0DAB zbb ARA ccb ILB icb UAB lcb KIB qcb HCB rcb HTA aeb HTA beb ITB reb RBB web PPC lfb0DAB qfb DAB tfb TLB ufb HAL yfb GAB ngb ILB pgb ILB rgb NIQ bhb IHB khb KIB rhb GLM nib ODE uib NIQ njb YLM ojb0DAB qjb GLM sjb PPC tjb NLB okb LMB alb FKB elb NLB glb ABI nlb KIB mmb GLM dpb0DAB lpb PPC qpb PPC iqb CRL kqb0DAB arb IRB crb PPC btb ITB jtb YLM otb KIB mub ITB evb YLM uvb YLM ewb NRK kxb HUL oxb PPC pxb ITB rxb UBR nyb LIB czb GLM jzb PPC kzb PPC aac NYM cac NYM lbc NIQ lcc PPC mcc PPC occNHCC qcc KRA odc SHZ kec NIQ yec NIQ fhc NYM jhcNHCC khc0KHC nhc PPC qhcNHCC zhcNHCC wic BJO yjc SHZ akc NIQ bkc RUK nkc NIQ skc PPC tkc KHC zkc NYM clc HTA dlc RYS elcNHCC jlc NIQ slc NAS tlc NIQ nmc SHZ rmc NIQ bnc NIQ hnc NIQ knc NIQ lncNHCC pnc SHZ rnc BRS tncNHCC unc RBB wnc NIQ aoc YLM boc NYM qoc HTA apcNHCC epc PPC fpc PPC ipc PPC xpc SHZ dqc NMH hrc TRC irc PPC prc PPC src PPC ascNHCC hsc NIQ jsc NIQ oscNHCC psc SHZ vsc NIQ ysc NIQ ctc HTA dtc NIQ etcNHCC htc NIQ ltcNHCC stc KIB utc NYM cucNHCC nvcNHCC hzc SHZ ozc SHZ tzc NIQ oad NIQ pad SIN rcd PPC ped PPC rgd HTA dhd WAM bid KND kid KND nid KND pid KND wid KND ejd RJD kjd PPC rjd0RJD skd KND gnd NUD iod RGD hrd GNM bsd BSL ytd PEN pud YLM kwd IUK uwd JUD ywd JUD uyd LUJ kke ITE yke NRK yme NYM bne LAK fne ENF hne ENT gse NOG ise KPI kse KPI ote ITB eve NVE nve KVE owe ITB oye LAK baf PPC lbf KIB mff LUF lif LIP gnf PPC epf PPC buf LUF cuf LUF euf LUF huf LUF iuf LUF quf LUF ruf LRF aag DAG cag PPC nag SHZ xag ORO zag ORO mbg WAG ecg HTA fcg PPC lcg PPC rcg PPC adg JAR..." /* TRUNCATED STRING LITERAL */
                                + (ulonglong)uVar3 * 8)) goto LAB_1403dcc45;
          uVar10 = (ulonglong)(uVar3 + 1);
        }
      } while ((int)uVar10 <= iVar13);
      uVar7 = (ulonglong)DAT_1404e5240;
      if ((0x88 < DAT_1404e5240) || (*(uint *)(&DAT_14045c3e0 + uVar7 * 8) != uVar2)) {
        iVar13 = 0x88;
        uVar10 = uVar8;
        do {
          uVar3 = (uint)(iVar13 + (int)uVar10) >> 1;
          uVar7 = (ulonglong)uVar3;
          if (uVar2 < *(uint *)(&DAT_14045c3e0 + (ulonglong)uVar3 * 8)) {
            iVar13 = uVar3 - 1;
          }
          else {
            if (uVar2 <= *(uint *)(&DAT_14045c3e0 + (ulonglong)uVar3 * 8)) goto LAB_1403dcbfc;
            uVar10 = (ulonglong)(uVar3 + 1);
          }
        } while ((int)uVar10 <= iVar13);
        uVar3 = 0xa2;
        do {
          uVar9 = (uVar3 - (int)uVar8 >> 1) + (int)uVar8;
          if (*(uint *)(&DAT_140454210 + (ulonglong)uVar9 * 4) <= uVar2) {
            if (uVar2 <= *(uint *)(&DAT_140454210 + (ulonglong)uVar9 * 4)) goto LAB_1403dcae0;
            uVar8 = (ulonglong)(uVar9 + 1);
            uVar9 = uVar3;
          }
          uVar3 = uVar9;
          if (uVar3 <= (uint)uVar8) {
            *param_4 = uVar2 & 0xdfdfdfff;
            *param_3 = 1;
            return;
          }
        } while( true );
      }
LAB_1403dcbfc:
      DAT_1404e5240 = (uint)uVar7;
      if (*param_3 != 0) {
        do {
          uVar2 = (uint)uVar8;
          uVar11 = uVar8;
          if ((byte)(&DAT_14045c3e6)[uVar7 * 8] <= uVar2) break;
          param_4[uVar8] =
               *(uint *)(&DAT_1404544e0 +
                        (ulonglong)(*(ushort *)(&DAT_14045c3e4 + uVar7 * 8) + uVar2) * 4);
          uVar8 = (ulonglong)(uVar2 + 1);
          uVar11 = uVar8;
        } while (uVar2 + 1 < *param_3);
      }
    }
    goto LAB_1403dcae0;
  }
  if (pcVar4 == (char *)0x0) {
    sVar6 = strlen(param_1);
    pcVar4 = param_1 + sVar6;
  }
  uVar11 = uVar8;
  if ((longlong)pcVar4 - (longlong)param_1 == 3) {
    uVar2 = FUN_1404199f0(param_1,(int)pcVar4 - iVar12);
    *param_4 = uVar2 & 0xdfdfdfff;
    *param_3 = 1;
    return;
  }
LAB_1403dcae0:
  *param_3 = (uint)uVar11;
  return;
}

