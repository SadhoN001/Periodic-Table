#include <stdio.h>
#include <unistd.h>//(access to the POSIX operation system API)

//#include"SKD.h"

struct table
{
    int atomic;
    char continue_choice;
};

int mainpage()
{
   system("cls");
   int num;
  // iiuc
   system("color 9");//blue color word
   printf("Please select your prefered operation : \n\n");
   printf("1.Periodic Table\n");
   printf("2.Search Element\n");
   printf("3.Exit\n");

   printf("\nEnter Your Choice -----> ");
   scanf("%d",&num);

   return num;
   system("cls");

}


int interface(int num)
{
    system("color 4");//red color
    if(num==1)
   {
   FILE*file;
   char ch;
   file=fopen("Team.txt","r");

   if(file==NULL)
   {
       printf("!! Something Went Wrong,Please Try Again !!\n");
   }
   else
   {
      // printf("\n\t\t\t\t\t\tWelcome To SKD Scientific Lab\n\n");
       while(!feof(file))
       {
           ch=fgetc(file);
           printf("%c",ch);
       }
       fclose(file);
   }
   }
   return num;
   system("cls");

}

int searchelement(int num)
{
    system("color A"); // green color
     struct table tt;
     int Choice;
     printf("Please Enter The Choice Number :");
     scanf("%d",&Choice);
     while(Choice--)
     {

     printf("\nPlease Enter The Atomic Number of a element: ");
     scanf("%d",&tt.atomic);


    switch(tt.atomic)
    {

    case(1):
        printf("\nAtomic number  : %d\nGroup          : 1\nPeriod         : 1\n",tt.atomic);
        printf("Symbol         : H\nName           : Hydrogen\nAtomic Mass    : 1.00797 (g/mol)\n\n");
        printf("Details        : Hydrogen is a clean alternative to methane,also known as natural gas.It's the most abundant chemical element,estimated to contribute 75%% of the mass of the universe.Here on earth,vast numbers of hydrogen atoms are contained in water,plants, animals and of course humans. But while it is present in nearly all molecules in living things,it is very scarce as a gas less than one part per million by volume.Hydrogen can be produced from a variety of resources, such as natural gas, nuclear power, biogas and renewable power like solar and wind. The challenge is harnessing hydrogen as a gas on a large scale to fuel our homes and businesses.\n\n");
        break;
     case(2):
        printf("\nAtomic number  : %d\nGroup          : 18\nPeriod         : 1\n",tt.atomic);
        printf("Symbol         : He\nName           : Helium\nAtomic Mass    : 4.00260 (g/mol)\n\n");
        printf("Details        : Helium is one of the noble gases of group 18 in the periodic table.It is the second lightest element.The main helium source in the world is a series of fields of natural gas in the United States.Helium is a colourless,odourless,insipid and nontoxic gas.It is less soluble in water than any other gas.It is the less reactive element and does not essentially form chemical compounds.\nThe density and viscosity of helium vapour are very low.The thermic conductivity and the caloric content are exceptionally high.\nHelium can be liquefied but its condensation temperature is the lowest among all the known substances.Helium was the first gas used \nfor filling balloons and dirigibles.Helium is the only cooler which is capable of reaching temperatures lower than 15 K (-434`F).The main application of ultralow temperature is in the development of the superconductivity state in which the resistance to the \nelectricity flux is almost zero. \n\n");
        break;
     case(3):
        printf("\nAtomic number  : %d\nGroup          : 1\nPeriod         : 2\n",tt.atomic);
        printf("Symbol         : Li\nName           : Lithium\nAtomic Mass    : 6.941 (g/mol)\n\n");
        printf("Details        : Lithium was discovered from a mineral, while other common alkali metals were discovered from plant material. This is thought to explain the origin of the elements name; from 'lithos' (Greek for 'stone'). The image is based on an alchemical symbol \nfor stone.A soft, silvery metal.It has the lowest density of all metals. It reacts vigorously with water.The most important use of \nlithium is in rechargeable batteries for mobile phones,laptops,digital cameras and electric vehicles. Lithium is also used in some \nnon-rechargeable batteries for things like heart pacemakers,toys and clocks.Lithium metal is made into alloys with aluminium and \nmagnesium,improving their strength and making them lighter. A magnesium-lithium alloy is used for armour plating.Aluminium-lithium \nalloys are used in aircraft,bicycle frames and high-speed trains.Lithium oxide is used in special glasses and glass ceramics.Lithium chloride is one of the most hygroscopic materials known and is used in air conditioning and industrial drying systems (as is lithium bromide).Lithium stearate is used as an all-purpose and high-temperature lubricant. Lithium carbonate is used in drugs to treat manic depression,although its action on the brain is still not fully understood.Lithium hydride is used as a means of storing hydrogen for use as a fuel.\n\n");
        break;
     case(4):
        printf("\nAtomic number  : %d\nGroup          : 2\nPeriod         : 2\n",tt.atomic);
        printf("Symbol         : Be\nName           : Beryllium\nAtomic Mass    : 9.01218 (g/mol)\n\n");
        printf("Details        : Beryllium is used in gears and cogs particularly in the aviation industry.Beryllium is a silvery-white metal.It is \nrelatively soft and has a low density.Beryllium is used in alloys with copper or nickel to make gyroscopes,springs, electrical contacts,spot-welding electrodes and non-sparking tools.Mixing beryllium with these metals increases their electrical and thermal conductivity.Other beryllium alloys are used as structural materials for high-speed aircraft,missiles,spacecraft and communication satellites.Beryllium is relatively transparent to X-rays so ultra-thin beryllium foil is finding use in X-ray lithography.Beryllium is also used in nuclear reactors as a reflector or moderator of neutrons.The oxide has a very high melting point making it useful in nuclear work as well as having ceramic applications.Beryllium and its compounds are toxic and carcinogenic.If beryllium dust or fumes are inhaled,it can lead to an incurable inflammation of the lungs called berylliosis.\n\n");
        break;
     case(5):
        printf("\nAtomic number  : %d\nGroup          : 13\nPeriod         : 2\n",tt.atomic);
        printf("Symbol         : B\nName           : Boron\nAtomic Mass    : 10.81 (g/mol)\n\n");
        printf("Details        : An image reflecting the importance of boron as an essential mineral for plants.The tree and its strange metallic \nfoliage 'grow' from a 'pure' dark powdered cone of the element.Pure boron is a dark amorphous powder.Amorphous boron is used as a \nrocket fuel igniter and in pyrotechnic flares.It gives the flares a distinctive green colour.The most important compounds of boron \nare boric (or boracic) acid, borax (sodium borate) and boric oxide.These can be found in eye drops,mild antiseptics,washing powders \nand tile glazes.Borax used to be used to make bleach and as a food preservative.Boric oxide is also commonly used in the manufacture \nof borosilicate glass (Pyrex).It makes the glass tough and heat resistant.Fibreglass textiles and insulation are made from \nborosilcate glass.Sodium octaborate is a flame retardant.The isotope boron-10 is good at absorbing neutrons.This means it can be used to regulate nuclear reactors.It also has a role in instruments used to detect neutrons.Boron is essential for the cell walls of \nplants.It is not considered poisonous to animals,but in higher doses it can upset the bodys metabolism.We take in about 2 milligrams of boron each day from our food,and about 60 grams in a lifetime.Some boron compounds are being studied as a possible treatment for brain tumours. \n\n");
        break;
     case(6):
        printf("\nAtomic number  : %d\nGroup          : 14\nPeriod         : 2\n",tt.atomic);
        printf("Symbol         : C\nName           : Carbon\nAtomic Mass    : 12.011 (g/mol)\n\n");
        printf("Details        : The three crowns represent the three major forms of the element in nature and carbons status as King of the Elements in the periodic table.There are a number of pure forms of this element including graphite,diamond,fullerenes and graphene.Diamond is a colourless,transparent,crystalline solid and the hardest known material. Graphite is black and shiny but soft.The nano-forms,\nfullerenes and graphene,appear as black or dark brown,soot-like powders.Carbon is unique among the elements in its ability to form \nstrongly bonded chains,sealed off by hydrogen atoms. These hydrocarbons,extracted naturally as fossil fuels(coal,oil and natural gas)are mostly used as fuels.A small but important fraction is used as a feedstock for the petrochemical industries producing polymers,\nfibres,paints, solvents and plastics etc.Impure carbon in the form of charcoal (from wood) and coke (from coal) is used in metal \nsmelting.It is particularly important in the iron and steel industries.Graphite is used in pencils,to make brushes in electric motors and in furnace linings.Activated charcoal is used for purification and filtration.It is found in respirators and kitchen extractor \nhoods.Carbon fibre is finding many uses as a very strong,yet lightweight,material.It is currently used in tennis rackets,skis,fishing rods,rockets and aeroplanes.Industrial diamonds are used for cutting rocks and drilling.Diamond films are used to protect surfaces \nsuch as razor blades.The more recent discovery of car-bon nanotubes,other fullerenes and atom-thin sheets of graphene has revolutionised hardware developments in the electronics industry and in nanotechnology generally. 150 years ago the natural concentration of carbon dioxide in the Earth's atmosphere was 280 ppm.In 2013,as a result of combusting fossil fuels with oxygen,there was 390 ppm.\nAtmospheric carbon dioxide allows visible light in but prevents some infrared escaping(the natural greenhouse effect).This keeps the Earth warm enough to sustain life.However,an enhanced greenhouse effect is underway,due to a human-induced rise in atmospheric carbon dioxide.This is affecting living things as our climate changes.\n\n");
        break;
     case(7):
        printf("\nAtomic number  : %d\nGroup          : 15\nPeriod         : 2\n",tt.atomic);
        printf("Symbol         : N\nName           : Nitrogen\nAtomic Mass    : 14.0067 (g/mol)\n\n");
        printf("Details        : A colourless, odourless gas.Nitrogen is important to the chemical industry.It is used to make fertilisers,nitric\nacid,nylon, dyes and explosives.To make these products, nitrogen must first be reacted with hydrogen to produce ammonia.This is done by the Haber process.150 million tonnes of ammonia are produced in this way every year.Liquid nitrogen is often used as a refrigerant.It is used for storing sperm,eggs and other cells for medical research and reproductive technology.It is also used to rapidly freeze foods, helping them to maintain moisture, colour, flavour and texture.Nitrogen makes up 78%% of the air, by volume. It is obtained by the distillation of liquid air. Around 45 million tonnes are extracted each year.It is found, as compounds, in all living things and hence also in coal and other fossil fuels.\n\n");
        break;
     case(8):
        printf("\nAtomic number  : %d\nGroup          : 16\nPeriod         : 2\n",tt.atomic);
        printf("Symbol         : O\nName           : Oxygen\nAtomic Mass    : 15.9994 (g/mol)\n\n");
        printf("Details        : A colourless,odourless gas.Oxygen gas is used for oxy-acetylene welding and cutting of metals. A growing use is in the treatment of sewage and of effluent from industry.Oxygen first appeared in the Earth's atmosphere around 2 billion years ago, accumulating from the photosynthesis of blue-green algae. Photosynthesis uses energy from the sun to split water into oxygen and hydrogen. The oxygen passes into the atmosphere and the hydrogen joins with carbon dioxide to produce biomass.Oxygen makes up 21%% of the atmosphere by volume. This is halfway between 17% (below which breathing for unacclimatised people becomes difficult) and 25%% (above which many organic compounds are highly flammable). The element and its compounds make up 49.2%% by mass of the Earth's crust, and about two-thirds of the human body.\n\n");
        break;
     case(9):
        printf("\nAtomic number  : %d\nGroup          : 17\nPeriod         : 2\n",tt.atomic);
        printf("Symbol         : F\nName           : Fluorine\nAtomic Mass    : 18.998403 (g/mol)\n\n");
        printf("Details        : A very pale yellow-green,dangerously reactive gas.It is the most reactive of all the elements and quickly attack all metals.Steel wool bursts into flames when exposed to fluorine.There was no commercial production of fluorine until the Second World War,when the development of the atom bomb, and other nuclear energy projects, made it necessary to produce large quantities.Before this, fluorine salts, known as fluorides, were for a long time used in welding and for frosting glass.Hydrofluoric acid is used for etching the glass of light bulbs and in similar applications.The average human body contains about 3 milligrams of fluoride. Too much fluoride is toxic. Elemental fluorine is highly toxic.\n\n");
        break;
     case(10):
        printf("\nAtomic number  : %d\nGroup          : 18\nPeriod         : 2\n",tt.atomic);
        printf("Symbol         : Ne\nName           : Neon\nAtomic Mass    : 20.179 (g/mol)\n\n");
        printf("Details        : A colourless, odourless gas. Neon will not react with any other substance.he largest use of neon is in making the   ubiquitous  'neon signs' for advertising. In a vacuum discharge tube neon glows a reddish orange colour. Only the red signs actually contain pure neon. Others contain different gases to give different colours.Neon is also used to make high-voltage indicators and switching gear, lightning arresters, diving equipment and lasers.Liquid neon is an important cryogenic refrigerant. It has over 40 times more refrigerating capacity per unit volume than liquid helium, and more than 3 times that of liquid hydrogen.Neon is the fifth most abundant element in the universe. However, it is present in the Earth's atmosphere at a concentration of just 18 parts per million. It is extracted by fractional distillation of liquid air. This gives a fraction that contains both helium and neon. The helium is removed from the mixture with activated charcoal.\n\n");
        break;
     case(11):
        printf("\nAtomic number  : %d\nGroup          : 1\nPeriod         : 3\n",tt.atomic);
        printf("Symbol         : Na\nName           : Sodium\nAtomic Mass    : 22.98977 (g/mol)\n\n");
        printf("Details        : Sodium is a soft metal that tarnishes within seconds of being exposed to the air. It also reacts vigorously with water.Sodium is used as a heat exchanger in some nuclear reactors, and as a reagent in the chemicals industry. But sodium salts have more uses than the metal itself.The most common compound of sodium is sodium chloride (common salt). It is added to food and used to de-ice roads in winter. It is also used as a feedstock for the chemical industry.Sodium carbonate (washing soda) is also a useful sodium salt. It is used as a water softener.Sodium is the sixth most common element on Earth, and makes up 2.6%% of the Earth's crust. The most common compound is sodium chloride. This very soluble salt has been leached into the oceans over the lifetime of the planet, but many salt beds or 'lakes' are found where ancient seas have evaporated. It is also found in many minerals including cryolite, zeolite and sodalite.Because sodium is so reactive it is never found as the metal in nature. Sodium metal is produced by electrolysis of dry molten sodium chloride.\n\n");
        break;
     case(12):
        printf("\nAtomic number  : %d\nGroup          : 2\nPeriod         : 3\n",tt.atomic);
        printf("Symbol         : Mg\nName           : Magnesium\nAtomic Mass    : 24.305 (g/mol)\n\n");
        printf("Details        : Elemental magnesium is a gray-white lightweight metal, two-thirds the density of aluminium. Magnesium has the lowest melting 923 K (650 C) and the lowest boiling point (1,363 K (1,090 C)) of all the alkaline earth metals.This element is the eleventh most abundant element by mass in the human body and is essential to all cells and some 300 enzymes.[14] Magnesium ions interact with polyphosphate compounds such as ATP, DNA, and RNA. Hundreds of enzymes require magnesium ions to function. Magnesium compounds are used medicinally as common laxatives and antacids (such as milk of magnesia), and to stabilize abnormal nerve excitation or blood vessel spasm in such conditions as eclampsia.Magnesium is used in lightweight materials and alloys. For example, when infused with silicon carbide nanoparticles, it has extremely high specific strength.\n\n");
        break;
     case(13):
        printf("\nAtomic number  : %d\nGroup          : 13\nPeriod         : 3\n",tt.atomic);
        printf("Symbol         : Al\nName           : Aluminum\nAtomic Mass    : 26.98154 (g/mol)\n\n");
        printf("Details        : Aluminium is a silvery-white, lightweight metal. It is soft and malleable.Aluminium is used in a huge variety of products including cans, foils, kitchen utensils, window frames, beer kegs and aeroplane parts. This is because of its particular properties. It has low density, is non-toxic, has a high thermal conductivity, has excellent corrosion resistance and can be easily cast,  machined and formed. It is also non-magnetic and non-sparking. It is the second most malleable metal and the sixth most ductile.It is often used as an alloy because aluminium itself is not particularly strong. Alloys with copper, manganese, magnesium and silicon are lightweight but strong. They are very important in the construction of aeroplanes and other forms of transport.Aluminium is a good electrical conductor and is often used in electrical transmission lines. It is cheaper than copper and weight for weight is almost twice as good a conductor.When evaporated in a vacuum, aluminium forms a highly reflective coating for both light and heat. It does not deteriorate, like a silver coating would. These aluminium coatings have many uses, including telescope mirrors, decorative paper, packages and toys.\n\n");
        break;
     case(14):
        printf("\nAtomic number  : %d\nGroup          : 14\nPeriod         : 3\n",tt.atomic);
        printf("Symbol         : Si\nName           : Silicon\nAtomic Mass    : 28.0855 (g/mol)\n\n");
        printf("Details        : The element, when ultrapure, is a solid with a blue-grey metallic sheen.Silicon is one of the most useful elements to mankind. Most is used to make alloys including aluminium-silicon and ferro-silicon (iron-silicon). These are used to make dynamo and transformer plates, engine blocks, cylinder heads and machine tools and to deoxidise steel.Granite and most other rocks contain a wide variety of complex silicate minerals, as well as silica (silicon dioxide). Sand rich in silica, as well as some clay minerals (hydrous aluminium phyllosilicates) are important ingredients for making concrete. Sand of nearly pure silica, relatively rare, is the basis for many forms of glass. Silicon, as silicate, is present in pottery, enamels and high-temperature ceramics.Silicon carbides are important abrasives and are also used in lasers.\n\n");
        break;
     case(15):
        printf("\nAtomic number  : %d\nGroup          : 15\nPeriod         : 3\n",tt.atomic);
        printf("Symbol         : P\nName           : Phosphorus\nAtomic Mass    : 30.97376 (g/mol)\n\n");
        printf("Details        : The two main forms of phosphorus are white phosphorus and red phosphorus. White phosphorus is a poisonous waxy solid and contact with skin can cause severe burns. It glows in the dark and is spontaneously flammable when exposed to air. Red phosphorus is an amorphous non-toxic solid.White phosphorus is used in flares and incendiary devices. Red phosphorus is in the material stuck on the side of matchboxes, used to strike safety matches against to light them.By far the largest use of phosphorus compounds is for fertilisers. Ammonium phosphate is made from phosphate ores. The ores are first converted into phosphoric acids before being made into ammonium phosphate.Phosphorus is also important in the production of steel. Phosphates are ingredients in some detergents, but are beginning to be phased out in some countries. This is because they can lead to high phosphate levels in natural water supplies causing unwanted algae to grow. Phosphates are also used in the production of special glasses and fine chinaware.White phosphorus is manufactured industrially by heating phosphate rock in the presence of carbon and silica in a furnace. This produces phosphorus as a vapour, which is then collected under water. Red phosphorus is made by gently heating white phosphorus to about 250 C in the absence of air.\n\n");
        break;
     case(16):
        printf("\nAtomic number  : %d\nGroup          : 16\nPeriod         : 3\n",tt.atomic);
        printf("Symbol         : S\nName           : Sulfur\nAtomic Mass    : 32.06 (g/mol)\n\n");
        printf("Details        : There are several allotropes of sulfur. The most common appears as yellow crystals or powder.Sulfur is used in the vulcanisation of black rubber, as a fungicide and in black gunpowder. Most sulfur is, however, used in the production of sulfuric acid, which is perhaps the most important chemical manufactured by western civilisations. The most important of sulfuric acid's many uses is in the manufacture of phosphoric acid, to make phosphates for fertilisers.Mercaptans are a family of organosulfur compounds. Some are added to natural gas supplies because of their distinctive smell, so that gas leaks can be detected easily. Others are used in silver polish, and in the production of pesticides and herbicides.Sulfites are used to bleach paper and as preservatives for many foodstuffs. Many surfactants and detergents are sulfate derivatives. Calcium sulfate (gypsum) is mined on the scale of 100 million tonnes each year for use in cement and plaster.Sulfur occurs naturally as the element, often in volcanic areas. This has traditionally been a major source for human use. It is also widely found in many minerals including iron pyrites, galena, gypsum and Epsom salts.Elemental sulfur was once commercially recovered from wells by the Frasch process. This involved forcing super-heated steam into the underground deposits to melt the sulfur, so it could be pumped to the surface as a liquid.Modern sulfur production is almost entirely from the various purification processes used to remove sulfur from natural gas, oil and tar sands. All living things contain sulfur and when fossilised (as in fossil fuels) the sulfur remains present. If unpurified fossil fuels are burnt, sulfur dioxide can enter the atmosphere, leading to acid rain.\n\n");
        break;
     case(17):
        printf("\nAtomic number  : %d\nGroup          : 17\nPeriod         : 3\n",tt.atomic);
        printf("Symbol         : Cl\nName           : Chlorine\nAtomic Mass    : 35.453 (g/mol)\n\n");
        printf("Details        : A yellowy-green dense gas with a choking smell.Chlorine kills bacteria – it is a disinfectant. It is used to treat drinking water and swimming pool water. It is also used to make hundreds of consumer products from paper to paints, and from textiles to insecticides.About 20%% of chlorine produced is used to make PVC. This is a very versatile plastic used in window frames, car interiors, electrical wiring insulation, water pipes, blood bags and vinyl flooring.Another major use for chlorine is in organic chemistry. It is used as an oxidising agent and in substitution reactions. 85%%of pharmaceuticals use chlorine or its compounds at some stage in their manufacture.In the past chlorine was commonly used to make chloroform (an anaesthetic) and carbon tetrachloride (a dry-cleaning solvent). However, both of these chemicals are now strictly controlled as they can cause liver damage.Chlorine gas is itself very poisonous, and was used as a chemical weapon during the First World War.\n\n");
        break;
     case(18):
        printf("\nAtomic number  : %d\nGroup          : 18\nPeriod         : 3\n",tt.atomic);
        printf("Symbol         : Ar\nName           : Argon\nAtomic Mass    : 39.948(g/mol)\n\n");
        printf("Details        : Argon is a colourless, odourless gas that is totally inert to other substances.Argon is often used when an inert atmosphere is needed. It is used in this way for the production of titanium and other reactive elements. It is also used by welders to protect the weld area and in incandescent light bulbs to stop oxygen from corroding the filament.Argon is used in fluorescent tubes and low-energy light bulbs. A low-energy light bulb often contains argon gas and mercury. When it is switched on an electric discharge passes through the gas, generating UV light. The coating on the inside surface of the bulb is activated by the UV light and it glows brightly.Double-glazed windows use argon to fill the space between the panes. The tyres of luxury cars can contain argon to protect the rubber and reduce road noise.Argon makes up 0.94%% of the Earth's atmosphere and is the third most abundant atmospheric gas. Levels have gradually increased since the Earth was formed because radioactive potassium-40 turns into argon as it decays. Argon is obtained commercially by the distillation of liquid air.\n\n");
        break;
     case(19):
        printf("\nAtomic number  : %d\nGroup          : 1\nPeriod         : 4\n",tt.atomic);
        printf("Symbol         : K\nName           : Potassium\nAtomic Mass    : 39.0983 (g/mol)\n\n");
        printf("Details        : A soft, silvery metal that tarnishes in air within minutes.The greatest demand for potassium compounds is in fertilisers. Many other potassium salts are of great importance, including the nitrate, carbonate, chloride, bromide, cyanide and sulfate. Potassium carbonate is used in the manufacture of glass. Potassium hydroxide is used to make detergent and liquid soap. Potassium chloride is used in pharmaceuticals and saline drips.Potassium is the seventh most abundant metal in the Earths crust. It makes up 2.4%% by mass. There are deposits of billions of tonnes of potassium chloride throughout the world. Mining extracts about 35 million tonnes a year.Most potassium minerals are found in igneous rocks and are sparingly soluble. The metal is difficult to obtain from these minerals. There are, however, other minerals such as sylvite (potassium chloride), sylvinite (a mixture of potassium and sodium chloride) and carnallite (potassium magnesium chloride) that are found in deposits formed by evaporation of old seas or lakes. The potassium salts can be easily recovered from these. Potassium salts are also found in the ocean but in smaller amounts compared with sodium.\n\n");
        break;
     case(20):
        printf("\nAtomic number  : %d\nGroup          : 2\nPeriod         : 4\n",tt.atomic);
        printf("Symbol         : Ca\nName           : Calcium\nAtomic Mass    : 40.08 (g/mol)\n\n");
        printf("Details        : Calcium is a silvery-white, soft metal that tarnishes rapidly in air and reacts with water.Calcium metal is used as a reducing agent in preparing other metals such as thorium and uranium. It is also used as an alloying agent for aluminium, beryllium, copper, lead and magnesium alloys.Calcium compounds are widely used. There are vast deposits of limestone (calcium carbonate) used directly as a building stone and indirectly for cement. When limestone is heated in kilns it gives off carbon dioxide gas leaving behind quicklime (calcium oxide). This reacts vigorously with water to give slaked lime (calcium hydroxide). Slaked lime is used to make cement, as a soil conditioner and in water treatment to reduce acidity, and in the chemicals industry. It is also used in steel making to remove impurities from the molten iron ore. When mixed with sand, slaked lime takes up carbon dioxide from the air and hardens as lime plaster.Gypsum (calcium sulfate) is used by builders as a plaster and by nurses for setting bones, as 'plaster of Paris'.Calcium is the fifth most abundant metal in the Earth’s crust (4.1%%). It is not found uncombined in nature, but occurs abundantly as limestone (calcium carbonate), gypsum (calcium sulfate), fluorite (calcium fluoride) and apatite (calcium chloro- or fluoro-phosphate).Hard water contains dissolved calcium bicarbonate. When this filters through the ground and reaches a cave, it precipitates out to form stalactites and stalagmites.Calcium metal is prepared commercially by heating lime with aluminium in a vacuum.\n\n");
        break;
     case(21):
        printf("\nAtomic number  : %d\nGroup          : 3\nPeriod         : 4\n",tt.atomic);
        printf("Symbol         : Sc\nName           : Scandium\nAtomic Mass    : 44.9559 (g/mol)\n\n");
        printf("Details        : A silvery metal that tarnishes in air, burns easily and reacts with water.Scandium is mainly used for research purposes. It has, however, great potential because it has almost as low a density as aluminium and a much higher melting point. An aluminium-scandium alloy has been used in Russian MIG fighter planes, high-end bicycle frames and baseball bats.Scandium iodide is added to mercury vapour lamps to produce a highly efficient light source resembling sunlight. These lamps help television cameras to reproduce colour well when filming indoors or at night-time.The radioactive isotope scandium-46 is used as a tracer in oil refining to monitor the movement of various fractions. It can also be used in underground pipes to detect leaks.\n\n");
        break;
     case(22):
        printf("\nAtomic number  : %d\nGroup          : 4\nPeriod         : 4\n",tt.atomic);
        printf("Symbol         : Ti\nName           : Titanium\nAtomic Mass    : 47.90 (g/mol)\n\n");
        printf("Details        : A hard, shiny and strong metal.itanium is as strong as steel but much less dense. It is therefore important as an alloying agent with many metals including aluminium, molybdenum and iron. These alloys are mainly used in aircraft, spacecraft and missiles because of their low density and ability to withstand extremes of temperature. They are also used in golf clubs, laptops, bicycles and crutches.Power plant condensers use titanium pipes because of their resistance to corrosion. Because titanium has excellent resistance to corrosion in seawater, it is used in desalination plants and to protect the hulls of ships, submarines and other structures exposed to seawater.Titanium metal connects well with bone, so it has found surgical applications such as in joint replacements (especially hip joints) and tooth implants.The largest use of titanium is in the form of titanium(IV) oxide. It is extensively used as a pigment in house paint, artists paint, plastics, enamels and paper. It is a bright white pigment with excellent covering power. It is also a good reflector of infrared radiation and so is used in solar observatories where heat causes poor visibility.Titanium(IV) oxide is used in sunscreens because it prevents UV light from reaching the skin. Nanoparticles of titanium(IV) oxide appear invisible when applied to the skin.\n\n");
        break;
     case(23):
        printf("\nAtomic number  : %d\nGroup          : 5\nPeriod         : 4\n",tt.atomic);
        printf("Symbol         : V\nName           : Vanadium\nAtomic Mass    : 50.9415 (g/mol)\n\n");
        printf("Details        : A silvery metal that resists corrosion.About 80%% of the vanadium produced is used as a steel additive. Vanadium-steel alloys are very tough and are used for armour plate, axles, tools, piston rods and crankshafts. Less than 1%% of vanadium, and as little chromium, makes steel shock resistant and vibration resistant. Vanadium alloys are used in nuclear reactors because of vanadium's low neutron-absorbing properties.Vanadium(V) oxide is used as a pigment for ceramics and glass, as a catalyst and in producing superconducting magnets.Vanadium is essential to some species, including humans, although we need very little. We take in just   0.01 milligrams each day, and this is more than sufficient for our needs. In some compounds vanadium can become toxic.Vanadium is found in about 65 different minerals including vanadinite, carnotite and patronite. It is also found in phosphate rock, certain iron ores and some crude oils in the form of organic complexes.Vanadium metal is obtained by reducing vanadium(V) oxide with calcium in a pressure vessel. Vanadium of high purity can be obtained by reducing vanadium(III) chloride with magnesium.\n\n");
        break;
     case(24):
        printf("\nAtomic number  : %d\nGroup          : 6\nPeriod         : 4\n",tt.atomic);
        printf("Symbol         : Cr\nName           : Chromium\nAtomic Mass    : 51.996 (g/mol)\n\n");
        printf("Details        : A hard, silvery metal with a blue tinge.Chromium is used to harden steel, to manufacture stainless steel (named as it won't rust) and to produce several alloys.Chromium plating can be used to give a polished mirror finish to steel. Chromium-plated car and lorry parts, such as bumpers, were once very common. It is also possible to chromium plate plastics, which are often used in bathroom fittings.About 90%% of all leather is tanned using chrome. However, the waste effluent is toxic so alternatives are being investigated.Chromium compounds are used as industrial catalysts and pigments (in bright green, yellow, red and orange colours). Rubies get their red colour from chromium, and glass treated with chromium has an emerald green colour.Chromium is an essential trace element for humans because it helps us to use glucose. However, it is poisonous in excess. We take in about 1 milligram a day. Foods such as brewer's yeast, wheat germ and kidney are rich in chromium.\n\n");
        break;
     case(25):
        printf("\nAtomic number  : %d\nGroup          : 7\nPeriod         : 4\n",tt.atomic);
        printf("Symbol         : Mn\nName           : Manganese\nAtomic Mass    : 54.9380 (g/mol)\n\n");
        printf("Details        : A hard, brittle, silvery metal.Manganese is too brittle to be of much use as a pure metal. It is mainly used in alloys, such as steel.Steel contains about 1%% manganese, to increase the strength and also improve workability and resistance to wear.Manganese steel contains about 13%% manganese. This is extremely strong and is used for railway tracks, safes, rifle barrels and prison bars.Drinks cans are made of an alloy of aluminium with 1.5%% manganese, to improve resistance to corrosion. With aluminium, antimony and copper it forms highly magnetic alloys.Manganese(IV) oxide is used as a catalyst, a rubber additive and to decolourise glass that is coloured green by iron impurities. Manganese sulfate is used to make a fungicide. Manganese(II) oxide is a powerful oxidising agent and is used in quantitative analysis. It is also used to make fertilisers and ceramics.Manganese is the fifth most abundant metal in the Earth's crust. Its minerals are widely distributed, with pyrolusite (manganese dioxide) and rhodochrosite (manganese carbonate) being the most common.The main mining areas for manganese are in China, Africa, Australia and Gabon. The metal is obtained by reducing the oxide with sodium, magnesium or aluminium, or by the electrolysis of manganese sulfate.Manganese nodules have been found on the floor of the oceans. These nodules contain about 24%% manganese, along with smaller amounts of many other elements.\n\n");
        break;
     case(26):
        printf("\nAtomic number  : %d\nGroup          : 8\nPeriod         : 4\n",tt.atomic);
        printf("Symbol         : Fe\nName           : Iron\nAtomic Mass    : 55.847 (g/mol)\n\n");
        printf("Details        : A shiny, greyish metal that rusts in damp air.Iron is an enigma.it rusts easily, yet it is the most important of all metals. 90%% of all metal that is refined today is iron.Most is used to manufacture steel, used in civil engineering (reinforced concrete, girders etc) and in manufacturing.There are many different types of steel with different properties and uses. Ordinary carbon steel is an alloy of iron with carbon (from 0.1%% for mild steel up to 2%% for high carbon steels), with small amounts of other elements.Alloy steels are carbon steels with other additives such as nickel, chromium, vanadium, tungsten and manganese. These are stronger and tougher than carbon steels and have a huge variety of applications including bridges, electricity pylons, bicycle chains, cutting tools and rifle barrels.Stainless steel is very resistant to corrosion. It contains at least 10.5%% chromium. Other metals such as nickel, molybdenum, titanium and copper are added to enhance its strength and workability. It is used in architecture, bearings, cutlery, surgical instruments and jewellery.Cast iron contains (3 - 5)%% carbon. It is used for pipes, valves and pumps. It is not as tough as steel but it is cheaper. Magnets can be made of iron and its alloys and compounds.Iron catalysts are used in the Haber process for producing ammonia, and in the Fischer–Tropsch process for converting syngas (hydrogen and carbon monoxide) into liquid fuels.Iron is an essential element for all forms of life and is non-toxic. The average human contains about 4 grams of iron. A lot of this is in haemoglobin, in the blood. Haemoglobin carries oxygen from our lungs to the cells, where it is needed for tissue respiration.Humans need (10-18) milligrams of iron each day. A lack of iron will cause anaemia to develop. Foods such as liver, kidney, molasses, brewer's yeast, cocoa and liquorice contain a lot of iron.\n\n");
        break;
     case(27):
        printf("\nAtomic number  : %d\nGroup          : 9\nPeriod         : 4\n",tt.atomic);
        printf("Symbol         : Co\nName           : Cobalt\nAtomic Mass    : 58.9332 (g/mol)\n\n");
        printf("Details        : A lustrous, silvery-blue metal. It is magnetic.Cobalt, like iron, can be magnetised and so is used to make magnets. It is alloyed with aluminium and nickel to make particularly powerful magnets.Other alloys of cobalt are used in jet turbines and gas turbine generators, where high-temperature strength is important.Cobalt metal is sometimes used in electroplating because of its attractive appearance, hardness and resistance to corrosion.Cobalt salts have been used for centuries to produce brilliant blue colours in paint, porcelain, glass, pottery and enamels.Radioactive cobalt 60 is used to treat cancer and, in some countries, to irradiate food to preserve it.\n\n");
        break;
     case(28):
        printf("\nAtomic number  : %d\nGroup          : 10\nPeriod         : 4\n",tt.atomic);
        printf("Symbol         : Ni\nName           : Nickel\nAtomic Mass    : 58.70 (g/mol)\n\n");
        printf("Details        : A silvery metal that resists corrosion even at high temperatures.Nickel resists corrosion and is used to plate other metals to protect them. It is, however, mainly used in making alloys such as stainless steel. Nichrome is an alloy of nickel and chromium with small amounts of silicon, manganese and iron. It resists corrosion, even when red hot, so is used in toasters and electric ovens. A copper-nickel alloy is commonly used in desalination plants, which convert seawater into fresh water. Nickel steel is used for armour plating. Other alloys of nickel are used in boat propeller shafts and turbine blades.Nickel is used in batteries, including rechargeable nickel-cadmium batteries and nickel-metal hydride batteries used in hybrid vehicles.Nickel has a long history of being used in coins. The US five-cent piece (known as a 'nickel') is 25%% nickel and 75%% copper.Finely divided nickel is used as a catalyst for hydrogenating vegetable oils. Adding nickel to glass gives it a green colour.\n\n");
        break;
     case(29):
        printf("\nAtomic number  : %d\nGroup          : 11\nPeriod         : 4\n",tt.atomic);
        printf("Symbol         : Cu\nName           : Copper\nAtomic Mass    : 63.546 (g/mol)\n\n");
        printf("Details        : A reddish-gold metal that is easily worked and drawn into wires.Historically, copper was the first metal to be worked by people. The discovery that it could be hardened with a little tin to form the alloy bronze gave the name to the Bronze Age.Traditionally it has been one of the metals used to make coins, along with silver and gold. However, it is the most common of the three and therefore the least valued. All US coins are now copper alloys, and gun metals also contain copper.Most copper is used in electrical equipment such as wiring and motors. This is because it conducts both heat and electricity very well, and can be drawn into wires. It also has uses in construction (for example roofing and plumbing), and industrial machinery (such as heat exchangers).Copper sulfate is used widely as an agricultural poison and as an algicide in water purification.Copper compounds, such as Fehling's solution, are used in chemical tests for sugar detection.\n\n");
        break;
     case(30):
        printf("\nAtomic number  : %d\nGroup          : 12\nPeriod         : 4\n",tt.atomic);
        printf("Symbol         : Zn\nName           : Zinc\nAtomic Mass    : 65.38 (g/mol)\n\n");
        printf("Details        : A silvery-white metal with a blue tinge. It tarnishes in air.Most zinc is used to galvanise other metals, such as iron, to prevent rusting. Galvanised steel is used for car bodies, street lamp posts, safety barriers and suspension bridges.Large quantities of zinc are used to produce die-castings, which are important in the automobile, electrical and hardware industries. Zinc is also used in alloys such as brass, nickel silver and aluminium solder.Zinc oxide is widely used in the manufacture of very many products such as paints, rubber, cosmetics, pharmaceuticals, plastics, inks, soaps, batteries, textiles and electrical equipment. Zinc sulfide is used in making luminous paints, fluorescent lights and x-ray screens.\n\n");
        break;
     case(31):
        printf("\nAtomic number  : %d\nGroup          : 13\nPeriod         : 4\n",tt.atomic);
        printf("Symbol         : Ga\nName           : Gallium\nAtomic Mass    : 69.72 (g/mol)\n\n");
        printf("Details        : Gallium is a soft, silvery-white metal, similar to aluminium.Gallium arsenide has a similar structure to silicon and is a useful silicon substitute for the electronics industry. It is an important component of many semiconductors. It is also used in red LEDs (light emitting diodes) because of its ability to convert electricity to light. Solar panels on the Mars Exploration Rover contained gallium arsenide.Gallium nitride is also a semiconductor. It has particular properties that make it very versatile. It has important uses in Blu-ray technology, mobile phones, blue and green LEDs and pressure sensors for touch switches.Gallium readily alloys with most metals. It is particularly used in low-melting alloys.It has a high boiling point, which makes it ideal for recording temperatures that would vaporise a thermometer.\n\n");
        break;
     case(32):
        printf("\nAtomic number  : %d\nGroup          : 14\nPeriod         : 4\n",tt.atomic);
        printf("Symbol         : Ge\nName           : Germanium\nAtomic Mass    : 72.59 (g/mol)\n\n");
        printf("Details        : A silvery-white semi-metal. It is brittle.Germanium is a semiconductor. The pure element was commonly doped with arsenic, gallium or other elements and used as a transistor in thousands of electronic applications. Today, however, other semiconductors have replaced it.Germanium oxide has a high index of refraction and dispersion. This makes it suitable for use in wide-angle camera lenses and objective lenses for microscopes. This is now the major use for this element.Germanium is also used as an alloying agent (adding 1%% germanium to silver stops it from tarnishing), in fluorescent lamps and as a catalyst.Both germanium and germanium oxide are transparent to infrared radiation and so are used in infrared spectroscopes.\n\n");
        break;
     case(33):
        printf("\nAtomic number  : %d\nGroup          : 15\nPeriod         : 4\n",tt.atomic);
        printf("Symbol         : As\nName           : Arsenic\nAtomic Mass    : 74.9216 (g/mol)\n\n");
        printf("Details        : Arsenic is a semi-metal. In its metallic form it is bright, silver-grey and brittle.Arsenic is a well-known poison. Arsenic compounds are sometimes used as rat poisons and insecticides but their use is strictly controlled.Surprisingly, arsenic can also have medicinal applications. In Victorian times, Dr Fowler's Solution (potassium arsenate dissolved in water) was a popular cure-all tonic that was even used by Charles Dickens. Today, organoarsenic compounds are added to poultry feed to prevent disease and improve weight gain.Arsenic is used as a doping agent in semiconductors (gallium arsenide) for solid-state devices. It is also used in bronzing, pyrotechnics and for hardening shot.Arsenic compounds can be used to make special glass and preserve wood.\n\n");
        break;
     case(34):
        printf("\nAtomic number  : %d\nGroup          : 16\nPeriod         : 4\n",tt.atomic);
        printf("Symbol         : Se\nName           : Selenium\nAtomic Mass    : 78.96 (g/mol)\n\n");
        printf("Details        : A semi-metal that can exist in two forms: as a silvery metal or as a red powder.The biggest use of selenium is as an additive to glass. Some selenium compounds decolourise glass, while others give a deep red colour. Selenium can also be used to reduce the transmission of sunlight in architectural glass, giving it a bronze tint. Selenium is used to make pigments for ceramics, paint and plastics.Selenium has both a photovoltaic action (converts light to electricity) and a photoconductive action (electrical resistance decreases with increased illumination). It is therefore useful in photocells, solar cells and photocopiers. It can also convert AC electricity to DC electricity, so is extensively used in rectifiers.Selenium is toxic to the scalp fungus that causes dandruff so it is used in some anti-dandruff shampoos. Selenium is also used as an additive to make stainless steel.\n\n");
        break;
     case(35):
        printf("\nAtomic number  : %d\nGroup          : 17\nPeriod         : 4\n",tt.atomic);
        printf("Symbol         : Br\nName           : Bromine\nAtomic Mass    : 79.904 (g/mol)\n\n");
        printf("Details        : Bromine is a deep-red, oily liquid with a sharp smell. It is toxic.Bromine is used in many areas such as agricultural chemicals, dyestuffs, insecticides, pharmaceuticals and chemical intermediates. Some uses are being phased out for environmental reasons, but new uses continue to be found.Bromine compounds can be used as flame retardants. They are added to furniture foam, plastic casings for electronics and textiles to make them less flammable. However, the use of bromine as a flame retardant has been phased out in the USA because of toxicity concerns.Organobromides are used in halon fire extinguishers that are used to fight fires in places like museums, aeroplanes and tanks. Silver bromide is a chemical used in film photography.Before leaded fuels were phased out, bromine was used to prepare 1,2-di-bromoethane, which was an anti-knock agent.Bromine is extracted by electrolysis from natural bromine-rich brine deposits in the USA, Israel and China. It was the first element to be extracted from seawater, but this is now only economically viable at the Dead Sea, Israel, which is particularly rich in bromide (up to 0.5%%).\n\n");
        break;
     case(36):
        printf("\nAtomic number  : %d\nGroup          : 18\nPeriod         : 4\n",tt.atomic);
        printf("Symbol         : Kr\nName           : Krypton\nAtomic Mass    : 83.80 (g/mol)\n\n");
        printf("Details        : Krypton is a gas with no colour or smell. It does not react with anything except fluorine gas.Krypton is used commercially as a filling gas for energy-saving fluorescent lights. It is also used in some flash lamps used for high-speed photography.Unlike the lighter gases in its group, it is reactive enough to form some chemical compounds. For example, krypton will react with fluorine to form krypton fluoride. Krypton fluoride is used in some lasers.Radioactive krypton was used during the Cold War to estimate Soviet nuclear production. The gas is a product of all nuclear reactors, so the Russian share was found by subtracting the amount that came from Western reactors from the total in the air.From 1960 to 1983 the isotope krypton-86 was used to define the standard measure of length. One metre was defined as exactly 1,650,763.73 wavelengths of a line in the atomic spectrum of the isotope.\n\n");
        break;
     case(37):
        printf("\nAtomic number  : %d\nGroup          : 1\nPeriod         : 5\n",tt.atomic);
        printf("Symbol         : Rb\nName           : Rubidium\nAtomic Mass    : 85.4678 (g/mol)\n\n");
        printf("Details        : A soft metal that ignites in the air and reacts violently with water.Rubidium is little used outside research. It has been used as a component of photocells, to remove traces of oxygen from vacuum tubes and to make special types of glass.It is easily ionised so was considered for use in ion engines, but was found to be less effective than caesium. It has also been proposed for use as a working fluid for vapour turbines and in thermoelectric generators.Rubidium nitrate is sometimes used in fireworks to give them a purple colour.\n\n");
        break;
     case(38):
        printf("\nAtomic number  : %d\nGroup          : 2\nPeriod         : 5\n",tt.atomic);
        printf("Symbol         : Sr\nName           : Strontium\nAtomic Mass    : 87.62 (g/mol)\n\n");
        printf("Details        : A soft, silvery metal that burns in air and reacts with water.Strontium is best known for the brilliant reds its salts give to fireworks and flares. It is also used in producing ferrite magnets and refining zinc.Modern 'glow-in-the-dark' paints and plastics contain strontium aluminate. They absorb light during the day and release it slowly for hours afterwards.Strontium-90, a radioactive isotope, is a by-product of nuclear reactors and present in nuclear fallout. It has a half-life of 28 years. It is absorbed by bone tissue instead of calcium and can destroy bone marrow and cause cancer. However, it is also useful as it is one of the best high-energy beta-emitters known. It can be used to generate electricity for space vehicles, remote weather stations and navigation buoys. It can also be used for thickness gauges and to remove static charges from machinery handling paper or plastic.Strontium chloride hexahydrate is an ingredient in toothpaste for sensitive teeth.\n\n");
        break;
     case(39):
        printf("\nAtomic number  : %d\nGroup          : 3\nPeriod         : 5\n",tt.atomic);
        printf("Symbol         : Y\nName           : Yttrium\nAtomic Mass    : 88.9059 (g/mol)\n\n");
        printf("Details        : A soft, silvery metal.Yttrium is often used as an additive in alloys. It increases the strength of aluminium and magnesium alloys. It is also used in the making of microwave filters for radar and has been used as a catalyst in ethene polymerisation.Yttrium-aluminium garnet (YAG) is used in lasers that can cut through metals. It is also used in white LED lights.Yttrium oxide is added to the glass used to make camera lenses to make them heat and shock resistant. It is also used to make superconductors. Yttrium oxysulfide used to be widely used to produce red phosphors for old-style colour television tubes.The radioactive isotope yttrium-90 has medical uses. It can be used to treat some cancers, such as liver cancer.\n\n");
        break;
     case(40):
        printf("\nAtomic number  : %d\nGroup          : 4\nPeriod         : 5\n",tt.atomic);
        printf("Symbol         : Zr\nName           : Zirconium\nAtomic Mass    : 91.22 (g/mol)\n\n");
        printf("Details        : A hard, silvery metal that is very resistant to corrosion.Zirconium does not absorb neutrons, making it an ideal material for use in nuclear power stations. More than 90%% of zirconium is used in this way. Nuclear reactors can have more than 100,000 metres of zirconium alloy tubing. With niobium, zirconium is superconductive at low temperatures and is used to make superconducting magnets.Zirconium metal is protected by a thin oxide layer making it exceptionally resistant to corrosion by acids, alkalis and seawater. For this reason it is extensively used by the chemical industry.Zirconium(IV) oxide is used in ultra-strong ceramics. It is used to make crucibles that will withstand heat-shock, furnace linings, foundry bricks, abrasives and by the glass and ceramics industries. It is so strong that even scissors and knives can be made from it. It is also used in cosmetics, antiperspirants, food packaging and to make microwave filters.Zircon is a natural semi-precious gemstone found in a variety of colours. The most desirable have a golden hue. The element was first discovered in this form, resulting in its name. Cubic zirconia (zirconium oxide) is a synthetic gemstone. The colourless stones, when cut, resemble diamonds.Zircon mixed with vanadium or praseodymium makes blue and yellow pigments for glazing pottery.\n\n");
        break;
     case(41):
        printf("\nAtomic number  : %d\nGroup          : 5\nPeriod         : 5\n",tt.atomic);
        printf("Symbol         : Nb\nName           : Niobium\nAtomic Mass    : 92.9064 (g/mol)\n\n");
        printf("Details        : A silvery metal that is very resistant to corrosion due to a layer of oxide on its surface.Niobium is used in alloys including stainless steel. It improves the strength of the alloys, particularly at low temperatures. Alloys containing niobium are used in jet engines and rockets, beams and girders for buildings and oil rigs, and oil and gas pipelines.This element also has superconducting properties. It is used in superconducting magnets for particle accelerators, MRI scanners and NMR equipment.Niobium oxide compounds are added to glass to increase the refractive index, which allows corrective glasses to be made with thinner lenses.\n\n");
        break;
     case(42):
        printf("\nAtomic number  : %d\nGroup          : 6\nPeriod         : 5\n",tt.atomic);
        printf("Symbol         : Mo\nName           : Molybdenum\nAtomic Mass    : 95.94 (g/mol)\n\n");
        printf("Details        : A shiny, silvery metal.Molybdenum has a very high melting point so it is produced and sold as a grey powder. Many molybdenum items are formed by compressing the powder at a very high pressure.Most molybdenum is used to make alloys. It is used in steel alloys to increase strength, hardness, electrical conductivity and resistance to corrosion and wear. These 'moly steel'alloys are used in parts of engines. Other alloys are used in heating elements, drills and saw blades.Molybdenum disulfide is used as a lubricant additive. Other uses for molybdenum include catalysts for the petroleum industry, inks for circuit boards, pigments and electrodes.The main molybdenum ore is molybdenite (molybdenum disulfide). It is processed by roasting to form molybdenum oxide, and then reducing to the metal. The main mining areas are in the USA, China, Chile and Peru. Some molybdenum is obtained as a by-product of tungsten and copper production. World production is around 200,000 tonnes per year.\n\n");
        break;
     case(43):
        printf("\nAtomic number  : %d\nGroup          : 7\nPeriod         : 5\n",tt.atomic);
        printf("Symbol         : Tc\nName           : Technetium\nAtomic Mass    : 98 (g/mol)\n\n");
        printf("Details        : A radioactive, silvery metal that does not occur naturally.The gamma-ray emitting technetium-99m (metastable) is widely used for medical diagnostic studies. Several chemical forms are used to image different parts of the body.Technetium is a remarkable corrosion inhibitor for steel, and adding very small amounts can provide excellent protection. This use is limited to closed systems as technetium is radioactive.\n\n");
        break;
     case(44):
        printf("\nAtomic number  : %d\nGroup          : 8\nPeriod         : 5\n",tt.atomic);
        printf("Symbol         : Ru\nName           : Ruthenium\nAtomic Mass    : 101.07 (g/mol)\n\n");
        printf("Details        : A shiny, silvery metal.Many new uses are emerging for ruthenium. Most is used in the electronics industry for chip resistors and electrical contacts. Ruthenium oxide is used in the chemical industry to coat the anodes of electrochemical cells for chlorine production. Ruthenium is also used in catalysts for ammonia and acetic acid production. Ruthenium compounds can be used in solar cells, which turn light energy into electrical energy.Ruthenium is one of the most effective hardeners for platinum and palladium, and is alloyed with these metals to make electrical contacts for severe wear resistance. It is used in some jewellery as an alloy with platinum.Ruthenium has no known biological role. Ruthenium(IV) oxide is highly toxic.\n\n");
        break;
     case(45):
        printf("\nAtomic number  : %d\nGroup          : 9\nPeriod         : 5\n",tt.atomic);
        printf("Symbol         : Rh\nName           : Rhodium\nAtomic Mass    : 102.9055 (g/mol)\n\n");
        printf("Details        : A hard, shiny, silvery metal.The major use of rhodium is in catalytic converters for cars (80%%). It reduces nitrogen oxides in exhaust gases.Rhodium is also used as catalysts in the chemical industry, for making nitric acid, acetic acid and hydrogenation reactions.It is used to coat optic fibres and optical mirrors, and for crucibles, thermocouple elements and headlight reflectors. It is used as an electrical contact material as it has a low electrical resistance and is highly resistant to corrosion.Rhodium is the rarest of all non-radioactive metals. It occurs uncombined in nature, along with other platinum metals, in river sands in North and South America. It is also found in the copper-nickel sulfide ores of Ontario, Canada.Rhodium is obtained commercially as a by-product of copper and nickel refining. World production is about 30 tonnes per year.\n\n");
        break;
     case(46):
        printf("\nAtomic number  : %d\nGroup          : 10\nPeriod         : 5\n",tt.atomic);
        printf("Symbol         : Pd\nName           : Palladium\nAtomic Mass    : 106.4 (g/mol)\n\n");
        printf("Details        : A shiny, silvery-white metal that resists corrosion.Most palladium is used in catalytic converters for cars. It is also used in jewellery and some dental fillings and crowns. White gold is an alloy of gold that has been decolourised by alloying with another metal, sometimes palladium.It is used in the electronics industry in ceramic capacitors, found in laptop computers and mobile phones. These consist of layers of palladium sandwiched between layers of ceramic.Finely divided palladium is a good catalyst and is used for hydrogenation and dehydrogenation reactions. Hydrogen easily diffuses through heated palladium and this provides a way of separating and purifying the gas.\n\n");
        break;
     case(47):
        printf("\nAtomic number  : %d\nGroup          : 11\nPeriod         : 5\n",tt.atomic);
        printf("Symbol         : Ag\nName           : Silver\nAtomic Mass    : 107.868 (g/mol)\n\n");
        printf("Details        : Silver is a relatively soft, shiny metal. It tarnishes slowly in air as sulfur compounds react with the surface forming black silver sulfide.Sterling silver contains 92.5%% silver. The rest is copper or some other metal. It is used for jewellery and silver tableware, where appearance is important.Silver is used to make mirrors, as it is the best reflector of visible light known, although it does tarnish with time. It is also used in dental alloys, solder and brazing alloys, electrical contacts and batteries. Silver paints are used for making printed circuits.Silver bromide and iodide were important in the history of photography, because of their sensitivity to light. Even with the rise of digital photography, silver salts are still important in producing high-quality images and protecting against illegal copying. Light-sensitive glass (such as photochromic lenses) works on similar principles. It darkens in bright sunlight and becomes transparent in low sunlight.Silver has antibacterial properties and silver nanoparticles are used in clothing to prevent bacteria from digesting sweat and forming unpleasant odours. Silver threads are woven into the fingertips of gloves so that they can be used with touchscreen phones.Silver occurs uncombined, and in ores such as argentite and chlorargyrite (horn silver). However, it is mostly extracted from lead-zinc, copper, gold and copper-nickel ores as a by-product of mining for these metals. The metal is recovered either from the ore, or during the electrolytic refining of copper. World production is about 20,000 tonnes per year.\n\n");
        break;
     case(48):
        printf("\nAtomic number  : %d\nGroup          : 12\nPeriod         : 5\n",tt.atomic);
        printf("Symbol         : Cd\nName           : Cadmium\nAtomic Mass    : 112.41 (g/mol)\n\n");
        printf("Details        : Cadmium is a silvery metal with a bluish tinge to its surface.Cadmium is a poison and is known to cause birth defects and cancer. As a result, there are moves to limit its use.80%% of cadmium currently produced is used in rechargeable nickel-cadmium batteries. However, they are gradually being phased out and replaced with nickel metal hydride batteries.Cadmium was often used to electroplate steel and protect it from corrosion. It is still used today to protect critical components of aeroplanes and oil platforms.Other past uses of cadmium included phosphors in cathode ray tube colour TV sets, and yellow, orange and red pigments.Cadmium absorbs neutrons and so is used in rods in nuclear reactors to control atomic fission.\n\n");
        break;
     case(49):
        printf("\nAtomic number  : %d\nGroup          : 13\nPeriod         : 5\n",tt.atomic);
        printf("Symbol         : In\nName           : Indium\nAtomic Mass    : 114.82 (g/mol)\n\n");
        printf("Details        : A soft, silvery metal that is stable in air and water.Most indium is used to make indium tin oxide (ITO), which is an important part of touch screens, flatscreen TVs and solar panels. This is because it conducts electricity, bonds strongly to glass and is transparent.Indium nitride, phosphide and antimonide are semiconductors used in transistors and microchips.Indium metal sticks to glass and can be used to give a mirror finish to windows of tall buildings, and as a protective film on welders' goggles. It has also been used to coat ball bearings in Formula 1 racing cars because of its low friction.An indium alloy has been used for fire-sprinkler systems in shops and warehouses because of its low melting point.\n\n");
        break;
     case(50):
        printf("\nAtomic number  : %d\nGroup          : 14\nPeriod         : 5\n",tt.atomic);
        printf("Symbol         : Sn\nName           : Tin\nAtomic Mass    : 118.710 (g/mol)\n\n");
        printf("Details        : A soft, pliable metal. Below 13 C it slowly changes to a powder form.Tin has many uses. It takes a high polish and is used to coat other metals to prevent corrosion, such as in tin cans, which are made of tin-coated steel. Alloys of tin are important, such as soft solder, pewter, bronze and phosphor bronze. A niobium-tin alloy is used for superconducting magnets.Most window glass is made by floating molten glass on molten tin to produce a flat surface. Tin salts sprayed onto glass are used to produce electrically conductive coatings.The most important tin salt used is tin(II) chloride, which is used as a reducing agent and as a mordant for dyeing calico and silk. Tin(IV) oxide is used for ceramics and gas sensors. Zinc stannate (Zn2SnO4) is a fire-retardant used in plastics.Some tin compounds have been used as anti-fouling paint for ships and boats, to prevent barnacles. However, even at low levels these compounds are deadly to marine life, especially oysters. Its use has now been banned in most countries.\n\n");
        break;
     case(51):
        printf("\nAtomic number  : %d\nGroup          : 15\nPeriod         : 5\n",tt.atomic);
        printf("Symbol         : Sb\nName           : Antimony\nAtomic Mass    : 121.75 (g/mol)\n\n");
        printf("Details        : Antimony is a semi-metal. In its metallic form it is silvery, hard and brittle.Antimony is used in the electronics industry to make some semiconductor devices, such as infrared detectors and diodes.It is alloyed with lead or other metals to improve their hardness and strength. A lead-antimony alloy is used in batteries. Other uses of antimony alloys include type metal (in printing presses), bullets and cable sheathing.Antimony compounds are used to make flame-retardant materials, paints, enamels, glass and pottery.Antimony and many of its compounds are toxic.Antimony is not an abundant element but is found in small quantities in over 100 mineral species. It is most often found as antimony(III) sulfide. It is extracted by roasting the antimony(III) sulfide to the oxide, and then reducing with carbon. Antimony can also be found as the native metal.China produces 88%% of the world’s antimony. Other producers are Bolivia, Russia and Tajikistan.\n\n");
        break;
     case(52):
        printf("\nAtomic number  : %d\nGroup          : 16\nPeriod         : 5\n",tt.atomic);
        printf("Symbol         : Te\nName           : Tellurium\nAtomic Mass    : 127.60 (g/mol)\n\n");
        printf("Details        : A semi-metal usually obtained as a grey powder.ellurium is used in alloys, mostly with copper and stainless steel, to improve their machinability. When added to lead it makes it more resistant to acids and improves its strength and hardness.Tellurium has been used to vulcanise rubber, to tint glass and ceramics, in solar cells, in rewritable CDs and DVDs and as a catalyst in oil refining. It can be doped with silver, gold, copper or tin in semiconductor applications.Tellurium is present in the Earth's crust only in about 0.001 parts per million. Tellurium minerals include calaverite, sylvanite and tellurite. It is also found uncombined in nature, but only very rarely. It is obtained commercially from the anode muds produced during the electrolytic refining of copper. These contain up to about 8%% tellurium.\n\n");
        break;
     case(53):
        printf("\nAtomic number  : %d\nGroup          : 17\nPeriod         : 5\n",tt.atomic);
        printf("Symbol         : I\nName           : Iodine\nAtomic Mass    : 126.9045 (g/mol)\n\n");
        printf("Details        : A black, shiny, crystalline solid. When heated, iodine sublimes to form a purple vapour.Photography was the first commercial use for iodine after Louis Daguerre, in 1839, invented a technique for producing images on a piece of metal. These images were called daguerreotypes.Today, iodine has many commercial uses. Iodide salts are used in pharmaceuticals and disinfectants, printing inks and dyes, catalysts, animal feed supplements and photographic chemicals. Iodine is also used to make polarising filters for LCD displays.Iodide is added in small amounts to table salt, in order to avoid iodine deficiency affecting the thyroid gland. The radioactive isotope iodine-131 is sometimes used to treat cancerous thyroid glands.Iodine is an essential element for humans, who need a daily intake of about 0.1 milligrams of iodide. Our bodies contain up to 20 milligrams, mainly in the thyroid gland. This gland helps to regulate growth and body temperature.Normally we get enough iodine from the food we eat. A deficiency of iodine can cause the thyroid gland to swell up (known as goitre).\n\n");
        break;
     case(54):
        printf("\nAtomic number  : %d\nGroup          : 18\nPeriod         : 5\n",tt.atomic);
        printf("Symbol         : Xe\nName           : Xenon\nAtomic Mass    : 131.30 (g/mol)\n\n");
        printf("Details        : A colourless, odourless gas. It is very unreactive.Xenon is used in certain specialised light sources. It produces a beautiful blue glow when excited by an electrical discharge. Xenon lamps have applications as high-speed electronic flash bulbs used by photographers, sunbed lamps and bactericidal lamps used in food preparation and processing. Xenon lamps are also used in ruby lasers.Xenon ion propulsion systems are used by several satellites to keep them in orbit, and in some other spacecraft.Xenon difluoride is used to etch silicon microprocessors. It is also used in the manufacture of 5-fluorouracil, a drug used to treat certain types of cancer.Xenon is present in the atmosphere at a concentration of 0.086 parts per million by volume. It can also be found in the gases that evolve from certain mineral springs. It is obtained commercially by extraction from liquid air.\n\n");
        break;
     case(55):
        printf("\nAtomic number  : %d\nGroup          : 1\nPeriod         : 6\n",tt.atomic);
        printf("Symbol         : Cs\nName           : Cesium\nAtomic Mass    : 132.9054 (g/mol)\n\n");
        printf("Details        : Caesium is a soft, gold-coloured metal that is quickly attacked by air and reacts explosively in water.The most common use for caesium compounds is as a drilling fluid. They are also used to make special optical glass, as a catalyst promoter, in vacuum tubes and in radiation monitoring equipment.One of its most important uses is in the 'caesium clock' (atomic clock). These clocks are a vital part of the internetand mobile phone networks, as well as Global Positioning System (GPS) satellites. They give the standard measure of time: the electron resonance frequency of the caesium atom is 9,192,631,770 cycles per second. Some caesium clocks are accurate to 1 second in 15 million years.\n\n");
        break;
     case(56):
        printf("\nAtomic number  : %d\nGroup          : 2\nPeriod         : 6\n",tt.atomic);
        printf("Symbol         : Ba\nName           : Barium\nAtomic Mass    : 137.33 (g/mol)\n\n");
        printf("Details        : Barium is a soft, silvery metal that rapidly tarnishes in air and reacts with water.Barium is not an extensively used element. Most is used in drilling fluids for oil and gas wells. It is also used in paint and in glassmaking.All barium compounds are toxic; however, barium sulfate is insoluble and so can be safely swallowed. A suspension of barium sulfate is sometimes given to patients suffering from digestive disorders. This is a 'barium meal' or 'barium enema'. Barium is a heavy element and scatters X-rays, so as it passes through the body the stomach and intestines can be distinguished on an X-ray.Barium carbonate has been used in the past as a rat poison. Barium nitrate gives fireworks a green colour.\n\n");
        break;
     case(57):
        printf("\nAtomic number  : %d\nGroup          : f-block(Lanthanide Series)\nPeriod         : 6 \n",tt.atomic);
        printf("Symbol         : La\nName           : Lanthanum\nAtomic Mass    : 138.9055 (g/mol)\n\n");
        printf("Details        : A soft, silvery-white metal. It rapidly tarnishes in air and burns easily when ignited.Lanthanum metal has no commercial uses. However, its alloys have a variety of uses. A lanthanum-nickel alloy is used to store hydrogen gas for use in hydrogen-powered vehicles. Lanthanum is also found in the anode of nickel metal hydride batteries used in hybrid cars.Lanthanum is an important component of mischmetal alloy (about 20%%). The best-known use for this alloy is in 'flints' for cigarette lighters.'rare earth' compounds containing lanthanum are used extensively in carbon lighting applications, such as studio lighting and cinema projection. They increase the brightness and give an emission spectrum similar to sunlight.Lanthanum(III) oxide is used in making special optical glasses, as it improves the optical properties and alkali resistance of the glass. Lanthanum salts are used in catalysts for petroleum refining.The ion La3+ is used as a biological tracer for Ca2+, and radioactive lanthanum has been tested for use in treating cancer.Lanthanum is found in 'rare earth' minerals, principally monazite (25%% lanthanum) and bastnaesite (38%% lanthanum). Ion-exchange and solvent extraction techniques are used to isolate the 'rare earth' elements from the minerals. Lanthanum metal is usually obtained by reducing the anhydrous fluoride with calcium.\n\n");
        break;
     case(58):
        printf("\nAtomic number  : %d\nGroup          : f-block(Lanthanide Series)\nPeriod         : 6\n",tt.atomic);
        printf("Symbol         : Ce\nName           : Cerium\nAtomic Mass    : 140.12 (g/mol)\n\n");
        printf("Details        : erium is a grey metal. It is little used because it tarnishes easily, reacts with water and burns when heated.Cerium is the major component of mischmetal alloy (just under 50%%). The best-known use for this alloy is in 'flints' for cigarette lighters. This is because cerium will make sparks when struck. The only other element that does this is iron.Cerium(Ill) oxide has uses as a catalyst. It is used in the inside walls of self-cleaning ovens to prevent the build-up of cooking residues. It is also used in catalytic converters. Cerium(III) oxide nanoparticles are being studied as an additive for diesel fuel to help it burn more completely and reduce exhaust emissions.Cerium sulfide is a non-toxic compound that is a rich red colour. It is used as a pigment.Cerium is also used in flat-screen TVs, low-energy light bulbs and floodlights.\n\n");
        break;
     case(59):
        printf("\nAtomic number  : %d\nGroup          : f-block(Lanthanide Series)\nPeriod         : 6\n",tt.atomic);
        printf("Symbol         : Pr\nName           : Praseodymium\nAtomic Mass    : 140.9077 (g/mol)\n\n");
        printf("Details        : A soft, silvery metal.Praseodymium is used in a variety of alloys. The high-strength alloy it forms with magnesium is used in aircraft engines. Mischmetal is an alloy containing about 5%% praseodymium and is used to make flints for cigarette lighters. Praseodymium is also used in alloys for permanent magnets.Along with other lanthanide elements, it is used in carbon arc electrodes for studio lighting and projection.Praseodymium salts are used to colour glasses, enamel and glazes an intense and unusually clean yellow. Praseodymium oxide is a component of didymium glass (along with neodymium). This glass is used in goggles used by welders and glassmakers, because it filters out the yellow light and infrared (heat) radiation.\n\n");
        break;
     case(60):
        printf("\nAtomic number  : %d\nGroup          : f-block(Lanthanide Series)\nPeriod         : 6\n",tt.atomic);
        printf("Symbol         : Nd\nName           : Neodymium\nAtomic Mass    : 144.24 (g/mol)\n\n");
        printf("Details        : A silvery-white metal. It rapidly tarnishes in air.The most important use for neodymium is in an alloy with iron and boron to make very strong permanent magnets. This discovery, in 1983, made it possible to miniaturise many electronic devices, including mobile phones, microphones, loudspeakers and electronic musical instruments. These magnets are also used in car windscreen wipers and wind turbines.Neodymium is a component, along with praseodymium, of didymium glass. This is a special glass for goggles used during glass blowing and welding. The element colours glass delicate shades of violet, wine-red and grey. Neodymium is also used in the glass for tanning booths, since it transmits the tanning UV rays but not the heating infrared rays.Neodymium glass is used to make lasers. These are used as laser pointers, as well as in eye surgery, cosmetic surgery and for the treatment of skin cancers.Neodymium oxide and nitrate are used as catalysts in polymerisation reactions.\n\n");
        break;
     case(61):
        printf("\nAtomic number  : %d\nGroup          : f-block(Lanthanide Series)\nPeriod         : 6\n",tt.atomic);
        printf("Symbol         : Pm\nName           : Promethium\nAtomic Mass    : 145 (g/mol)\n\n");
        printf("Details        : A radioactive metal.Most promethium is used only in research. A little promethium is used in specialised atomic batteries. These are roughly the size of a drawing pin and are used for pacemakers, guided missiles and radios. The radioactive decay of promethium is used to make a phosphor give off light and this light is converted into electricity by a solar cell.Promethium can also be used as a source of x-rays and radioactivity in measuring instruments.Promethium’s longest-lived isotope has a half-life of only 18 years. For this reason it is not found naturally on Earth. It has been found that a star in the Andromeda galaxy is manufacturing promethium, but it is not known how.Promethium can be produced by irradiating neodymium and praseodymium with neutrons, deuterons and alpha particles. It can also be prepared by ion exchange of nuclear reactor fuel processing wastes.\n\n");
        break;
     case(62):
        printf("\nAtomic number  : %d\nGroup          : f-block(Lanthanide Series)\nPeriod         : 6\n",tt.atomic);
        printf("Symbol         : Sm\nName           : Samarium\nAtomic Mass    : 150.4 (g/mol)\n\n");
        printf("Details        : A silvery-white metal.Samarium-cobalt magnets are much more powerful than iron magnets. They remain magnetic at high temperatures and so are used in microwave applications. They enabled the miniaturisation of electronic devices like headphones, and the development of personal stereos. However, neodymium magnets are now more commonly used instead.Samarium is used to dope calcium chloride crystals for use in optical lasers. It is also used in infrared absorbing glass and as a neutron absorber in nuclear reactors. Samarium oxide finds specialised use in glass and ceramics. In common with other lanthanides, samarium is used in carbon arc lighting for studio lighting and projection.Samarium has no known biological role. It has low toxicity.\n\n");
        break;
     case(63):
        printf("\nAtomic number  : %d\nGroup          : f-block(Lanthanide Series)\nPeriod         : 6\n",tt.atomic);
        printf("Symbol         : Eu\nName           : Europium\nAtomic Mass    : 151.96 (g/mol)\n\n");
        printf("Details        : A soft, silvery metal that tarnishes quickly and reacts with water.Europium is used in the printing of euro banknotes. It glows red under UV light, and forgeries can be detected by the lack of this red glow.Low-energy light bulbs contain a little europium to give a more natural light, by balancing the blue (cold) light with a little red (warm) light.Europium is excellent at absorbing neutrons, making it valuable in control rods for nuclear reactors.Europium-doped plastic has been used as a laser material. It is also used in making thin super-conducting alloys.\n\n");
        break;
     case(64):
        printf("\nAtomic number  : %d\nGroup          : f-block(Lanthanide Series)\nPeriod         : 6\n",tt.atomic);
        printf("Symbol         : Gd\nName           : Gadolinium\nAtomic Mass    : 157.25 (g/mol)\n\n");
        printf("Details        : A soft, silvery metal that reacts with oxygen and water.Gadolinium has useful properties in alloys. As little as 1%% gadolinium can improve the workability of iron and chromium alloys, and their resistance to high temperatures and oxidation. It is also used in alloys for making magnets, electronic components and data storage disks.Its compounds are useful in magnetic resonance imaging (MRI), particularly in diagnosing cancerous tumours.Gadolinium is excellent at absorbing neutrons, and so is used in the core of nuclear reactors.\n\n");
        break;
     case(65):
        printf("\nAtomic number  : %d\nGroup          : f-block(Lanthanide Series)\nPeriod         : 6\n",tt.atomic);
        printf("Symbol         : Tb\nName           : Terbium\nAtomic Mass    : 158.9254 (g/mol)\n\n");
        printf("Details        : A soft, silvery metal.Terbium is used to dope calcium fluoride, calcium tungstate and strontium molybdate, all used in solid-state devices. It is also used in low-energy lightbulbs and mercury lamps. It has been used to improve the safety of medical x-rays by allowing the same quality image to be produced with a much shorter exposure time. Terbium salts are used in laser devices.An alloy of terbium, dysprosium and iron lengthens and shortens in a magnetic field. This effect forms the basis of loudspeakers that sit on a flat surface, such as a window pane, which then acts as the speaker.\n\n");
        break;
     case(66):
        printf("\nAtomic number  : %d\nGroup          : f-block(Lanthanide Series)\nPeriod         : 6\n",tt.atomic);
        printf("Symbol         : Dy\nName           : Dysprosium\nAtomic Mass    : 162.50 (g/mol)\n\n");
        printf("Details        : A bright, silvery metallic element.As a pure metal it is little used, because it reacts readily with water and air. Dysprosium’s main use is in alloys for neodymium-based magnets. This is because it is resistant to demagnetisation at high temperatures. This property is important for magnets used in motors or generators. These magnets are used in wind turbines and electrical vehicles, so demand for dysprosium is growing rapidly.Dysprosium iodide is used in halide discharge lamps. The salt enables the lamps to give out a very intense white light.A dysprosium oxide-nickel cermet (a composite material of ceramic and metal) is used in nuclear reactor control rods. It readily absorbs neutrons, and does not swell or contract when bombarded with neutrons for long periods.\n\n");
        break;
     case(67):
        printf("\nAtomic number  : %d\nGroup          : f-block(Lanthanide Series)\nPeriod         : 6\n",tt.atomic);
        printf("Symbol         : Ho\nName           : Holmium\nAtomic Mass    : 164.9304 (g/mol)\n\n");
        printf("Details        : A bright, silvery metal.Holmium can absorb neutrons, so it is used in nuclear reactors to keep a chain reaction under control. Its alloys are used in some magnets.\n\n");
        break;
     case(68):
        printf("\nAtomic number  : %d\nGroup          : f-block(Lanthanide Series)\nPeriod         : 6\n",tt.atomic);
        printf("Symbol         : Er\nName           : Erbium\nAtomic Mass    : 167.26 (g/mol)\n\n");
        printf("Details        : A soft, silvery metallic element.Erbium finds little use as a metal because it slowly tarnishes in air and is attacked by water.When alloyed with metals such as vanadium, erbium lowers their hardness and improves their workability.Erbium oxide is occasionally used in infrared absorbing glass, for example safety glasses for welders and metal workers. When erbium is added to glass it gives the glass a pink tinge. It is used to give colour to some sunglasses and imitation gems.Broadband signals, carried by fibre optic cables, are amplified by including erbium in the glass fibre.\n\n");
        break;
     case(69):
        printf("\nAtomic number  : %d\nGroup          : f-block(Lanthanide Series)\nPeriod         : 6\n",tt.atomic);
        printf("Symbol         : Tm\nName           : Thulium\nAtomic Mass    : 168.9342 (g/mol)\n\n");
        printf("Details        : A bright, silvery metal.When irradiated in a nuclear reactor, thulium produces an isotope that emits x-rays. A 'button' of this isotope is used to make a lightweight, portable x-ray machine for medical use. Thulium is used in lasers with surgical applications.Thulium is found principally in the mineral monazite, which contains about 20 parts per million. It is extracted by ion exchange and solvent extraction. The metal is obtained by reducing the anhydrous fluoride with calcium, or reducing the oxide with lanthanum.\n\n");
        break;
     case(70):
        printf("\nAtomic number  : %d\nGroup          : f-block(Lanthanide Series)\nPeriod         : 6\n",tt.atomic);
        printf("Symbol         : Yb\nName           : Ytterbium\nAtomic Mass    : 173.04 (g/mol)\n\n");
        printf("Details        : A soft, silvery metal. It slowly oxidises in air, forming a protective surface layer.Ytterbium is beginning to find a variety of uses, such as in memory devices and tuneable lasers. It can also be used as an industrial catalyst and is increasingly being used to replace other catalysts considered to be too toxic and polluting.\n\n");
        break;
     case(71):
        printf("\nAtomic number  : %d\nGroup          : 3\nPeriod         : 6\n",tt.atomic);
        printf("Symbol         : Lu\nName           : Lutetium\nAtomic Mass    : 174.967 (g/mol)\n\n");
        printf("Details        : A silvery-white, hard, dense metal.Lutetium is little used outside research. One of its few commercial uses is as a catalyst for cracking hydrocarbons in oil refineries.\n\n");
        break;
     case(72):
        printf("\nAtomic number  : %d\nGroup          : 4\nPeriod         : 6\n",tt.atomic);
        printf("Symbol         : Hf\nName           : Hafnium\nAtomic Mass    : 178.49 (g/mol)\n\n");
        printf("Details        : A shiny, silvery metal that resists corrosion and can be drawn into wires.Hafnium is a good absorber of neutrons and is used to make control rods, such as those found in nuclear submarines. It also has a very high melting point and because of this is used in plasma welding torches.Hafnium has been successfully alloyed with several metals including iron, titanium and niobium.Hafnium oxide is used as an electrical insulator in microchips, while hafnium catalysts have been used in polymerisation reactions.\n\n");
        break;
     case(73):
        printf("\nAtomic number  : %d\nGroup          : 5\nPeriod         : 6\n",tt.atomic);
        printf("Symbol         : Ta\nName           : Tantalum\nAtomic Mass    : 180.9479 (g/mol)\n\n");
        printf("Details        : A shiny, silvery metal that is very resistant to corrosion.One of the main uses of tantalum is in the production of electronic components. An oxide layer which forms on the surface of tantalum can act as an insulating (dielectric) layer. Because tantalum can be used to coat other metals with a very thin layer, a high capacitance can be achieved in a small volume. This makes tantalum capacitors attractive for portable electronics such as mobile phones.Tantalum causes no immune response in mammals, so has found wide use in the making of surgical implants. It can replace bone, for example in skull plates; as foil or wire it connects torn nerves; and as woven gauze it binds abdominal muscle.It is very resistant to corrosion and so is used in equipment for handling corrosive materials. It has also found uses as electrodes for neon lights, AC/DC rectifiers and in glass for special lenses.Tantalum alloys can be extremely strong and have been used for turbine blades, rocket nozzles and nose caps for supersonic aircraft.\n\n");
        break;
     case(74):
        printf("\nAtomic number  : %d\nGroup          : 6\nPeriod         : 6\n",tt.atomic);
        printf("Symbol         : W\nName           : Tungsten\nAtomic Mass    : 183.85 (g/mol)\n\n");
        printf("Details        : A shiny, silvery-white metal.Tungsten was used extensively for the filaments of old-style incandescent light bulbs, but these have been phased out in many countries. This is because they are not very energy efficient; they produce much more heat than light.Tungsten has the highest melting point of all metals and is alloyed with other metals to strengthen them. Tungsten and its alloys are used in many high-temperature applications, such as arc-welding electrodes and heating elements in high-temperature furnaces.Tungsten carbide is immensely hard and is very important to the metal-working, mining and petroleum industries. It is made by mixing tungsten powder and carbon powder and heating to 2200`C. It makes excellent cutting and drilling tools, including a new 'painless' dental drill which spins at ultra-high speeds.Calcium and magnesium tungstates are widely used in fluorescent lighting.Tungsten is the heaviest metal to have a known biological role. Some bacteria use tungsten in an enzyme to reduce carboxylic acids to aldehydes.\n\n");
        break;
     case(75):
        printf("\nAtomic number  : %d\nGroup          : 7\nPeriod         : 6\n",tt.atomic);
        printf("Symbol         : Re\nName           : Rhenium\nAtomic Mass    : 186.207 (g/mol)\n\n");
        printf("Details        : A metal with a very high melting point.  Tungsten is the only metallic element with a higher melting point.Rhenium is used as an additive to tungsten- and molybdenum-based alloys to give useful properties. These alloys are used for oven filaments and x-ray machines. It is also used as an electrical contact material as it resists wear and withstands arc corrosion.Rhenium catalysts are extremely resistant to poisoning (deactivation) and are used for the hydrogenation of fine chemicals. Some rhenium is used in nickel alloys to make single-crystal turbine blades.\n\n");
        break;
     case(76):
        printf("\nAtomic number  : %d\nGroup          : 8\nPeriod         : 6\n",tt.atomic);
        printf("Symbol         : Os\nName           : Osmium\nAtomic Mass    : 190.2 (g/mol)\n\n");
        printf("Details        : A shiny, silver metal that resists corrosion. It is the densest of all the elements and is twice as dense as lead.Osmium has only a few uses. It is used to produce very hard alloys for fountain pen tips, instrument pivots, needles and electrical contacts. It is also used in the chemical industry as a catalyst.Osmium has no known biological role. The metal is not toxic, but its oxide is volatile and very toxic, causing lung, skin and eye damage.\n\n");
        break;
     case(77):
        printf("\nAtomic number  : %d\nGroup          : 9\nPeriod         : 6\n",tt.atomic);
        printf("Symbol         : Ir\nName           : Iridium\nAtomic Mass    : 192.22 (g/mol)\n\n");
        printf("Details        : Iridium is a hard, silvery metal. It is almost as unreactive as gold. It has a very high density and melting point.Iridium is the most corrosion-resistant material known. It is used in special alloys and forms an alloy with osmium, which is used for pen tips and compass bearings. It was used in making the standard metre bar, which is an alloy of 90%% platinum and 10%% iridium. It is also used for the contacts in spark plugs because of its high melting point and low reactivity.\n\n");
        break;
     case(78):
        printf("\nAtomic number  : %d\nGroup          : 10\nPeriod         : 6\n",tt.atomic);
        printf("Symbol         : Pt\nName           : Platinum\nAtomic Mass    : 195.09 (g/mol)\n\n");
        printf("Details        : A shiny, silvery-white metal as resistant to corrosion as gold.Platinum is used extensively for jewellery. Its main use, however, is in catalytic converters for cars, trucks and buses. This accounts for about 50%% of demand each year. Platinum is very effective at converting emissions from the vehicle’s engine into less harmful waste products.Platinum is used in the chemicals industry as a catalyst for the production of nitric acid, silicone and benzene. It is also used as a catalyst to improve the efficiency of fuel cells.The electronics industry uses platinum for computer hard disks and thermocouples.Platinum is also used to make optical fibres and LCDs, turbine blades, spark plugs, pacemakers and dental fillings.Platinum compounds are important chemotherapy drugs used to treat cancers.\n\n");
        break;
     case(79):
        printf("\nAtomic number  : %d\nGroup          : 11\nPeriod         : 6\n",tt.atomic);
        printf("Symbol         : Au\nName           : Gold\nAtomic Mass    : 196.9665 (g/mol)\n\n");
        printf("Details        : A soft metal with a characteristic yellow colour. It is chemically unreactive, although it will dissolve in aqua regia (a mixture of nitric and hydrochloric acids).Most mined gold is stored as bullion. It is also, however, used extensively in jewellery, either in its pure form or as an alloy. The term 'carat' indicates the amount of gold present in an alloy. 24-carat is pure gold, but it is very soft. 18- and 9-carat gold alloys are commonly used because they are more durable.The metal is also used for coinage, and has been used as standard for monetary systems in some countries.Gold can be beaten into very thin sheets (gold leaf) to be used in art, for decoration and as architectural ornament. Electroplating can be used to cover another metal with a very thin layer of gold. This is used in gears for watches, artificial limb joints, cheap jewellery and electrical connectors. It is ideal for protecting electrical copper components because it conducts electricity well and does not corrode (which would break the contact). Thin gold wires are used inside computer chips to produce circuits.Dentists sometimes use gold alloys in fillings, and a gold compound is used to treat some cases of arthritis.Gold nanoparticles are increasingly being used as industrial catalysts. Vinyl acetate, which is used to make PVA (for glue, paint and resin), is made using a gold catalyst.\n\n");
        break;
     case(80):
        printf("\nAtomic number  : %d\nGroup          : 12\nPeriod         : 6\n",tt.atomic);
        printf("Symbol         : Hg\nName           : Mercury\nAtomic Mass    : 200.59 (g/mol)\n\n");
        printf("Details        : A liquid, silvery metal.Mercury has fascinated people for millennia, as a heavy liquid metal. However, because of its toxicity, many uses of mercury are being phased out or are under review.It is now mainly used in the chemical industry as catalysts. It is also used in some electrical switches and rectifiers.Previously its major use was in the manufacture of sodium hydroxide and chlorine by electrolysis of brine. These plants will all be phased out by 2020. It was also commonly used in batteries, fluorescent lights, felt production, thermometers and barometers. Again, these uses have been phased out.Mercury easily forms alloys, called amalgams, with other metals such as gold, silver and tin. The ease with which it amalgamates with gold made it useful in recovering gold from its ores. Mercury amalgams were also used in dental fillings.Mercuric sulfide (vermilion) is a high-grade, bright-red paint pigment, but is very toxic so is now only used with great care.\n\n");
        break;
     case(81):
        printf("\nAtomic number  : %d\nGroup          : 13\nPeriod         : 6\n",tt.atomic);
        printf("Symbol         : Tl\nName           : Thallium\nAtomic Mass    : 204.37 (g/mol)\n\n");
        printf("Details        : A soft, silvery-white metal that tarnishes easily.The use of thallium is limited as it is a toxic element. Thallium sulfate was employed as a rodent killer – it is odourless and tasteless – but household use of this poison has been prohibited in most developed countries.Most thallium is used by the electronics industry in photoelectric cells. Thallium oxide is used to produce special glass with a high index of refraction, and also low melting glass that becomes fluid at about 125K.An alloy of mercury containing 8%% thallium has a melting point 20`C lower than mercury alone. This can be used in low temperature thermometers and switches.\n\n");
        break;
     case(82):
        printf("\nAtomic number  : %d\nGroup          : 14\nPeriod         : 6\n",tt.atomic);
        printf("Symbol         : Pb\nName           : Lead\nAtomic Mass    : 207.2 (g/mol)\n\n");
        printf("Details        : A dull, silvery-grey metal. It is soft and easily worked into sheets.This easily worked and corrosion-resistant metal has been used for pipes, pewter and paint since Roman times. It has also been used in lead glazes for pottery and, in this century, insecticides, hair dyes and as an anti-knocking additive for petrol. All these uses have now been banned, replaced or discouraged as lead is known to be detrimental to health, particularly that of children.Lead is still widely used for car batteries, pigments, ammunition, cable sheathing, weights for lifting, weight belts for diving, lead crystal glass, radiation protection and in some solders.It is often used to store corrosive liquids. It is also sometimes used in architecture, for roofing and in stained glass windows.\n\n");
        break;
     case(83):
        printf("\nAtomic number  : %d\nGroup          : 15\nPeriod         : 6\n",tt.atomic);
        printf("Symbol         : Bi\nName           : Bismuth\nAtomic Mass    : 208.9804 (g/mol)\n\n");
        printf("Details        : Bismuth is a high-density, silvery, pink-tinged metal.Bismuth metal is brittle and so it is usually mixed with other metals to make it useful. Its alloys with tin or cadmium have low melting points and are used in fire detectors and extinguishers, electric fuses and solders.Bismuth oxide is used as a yellow pigment for cosmetics and paints, while bismuth(III) chloride oxide (BiClO) gives a pearly effect to cosmetics. Basic bismuth carbonate is taken in tablet or liquid form for indigestion as 'bismuth mixture'.\n\n");
        break;
     case(84):
        printf("\nAtomic number  : %d\nGroup          : 16\nPeriod         : 6\n",tt.atomic);
        printf("Symbol         : Po\nName           : Polonium\nAtomic Mass    : 209 (g/mol)\n\n");
        printf("Details        : A silvery-grey, radioactive semi-metal.Polonium is an alpha-emitter, and is used as an alpha-particle source in the form of a thin film on a stainless steel disc. These are used in antistatic devices and for research purposes.A single gram of polonium will reach a temperature of 500`C as a result of the alpha radiation emitted. This makes it useful as a source of heat for space equipment.It can be mixed or alloyed with beryllium to provide a source of neutrons.\n\n");
        break;
     case(85):
        printf("\nAtomic number  : %d\nGroup          : 17\nPeriod         : 6\n",tt.atomic);
        printf("Symbol         : At\nName           : Astatine\nAtomic Mass    : 210 (g/mol)\n\n");
        printf("Details        : Astatine is a dangerously radioactive element.There are currently no uses for astatine outside of research. The half-life of the most stable isotope is only 8 hours, and only tiny amounts have ever been produced.A mass spectrometer has been used to confirm that astatine behaves chemically like other halogens, particularly iodine.Astatine has no known biological role. It is toxic due to its radioactivity.\n\n");
        break;
     case(86):
        printf("\nAtomic number  : %d\nGroup          : 18\nPeriod         : 6\n",tt.atomic);
        printf("Symbol         : Rn\nName           : Radon\nAtomic Mass    : 222 (g/mol)\n\n");
        printf("Details        : Radon is a colourless and odourless gas. It is chemically inert, but radioactive.Radon decays into radioactive polonium and alpha particles. This emitted radiation made radon useful in cancer therapy. Radon was used in some hospitals to treat tumours by sealing the gas in minute tubes, and implanting these into the tumour, treating the disease in situ. Other, safer treatments are now more commonly used.In some places, high concentrations of radon can build up indoors, escaping from the ground or from granite buildings. Home testing kits are available which can be sent away for analysis.Radon is produced naturally from the decay of the isotope radium-226, which is found in rocks. It was first discovered as a radioactive gas produced from radium as it decayed. There is a detectable amount in the Earth's atmosphere.\n\n");
        break;
     case(87):
        printf("\nAtomic number  : %d\nGroup          : 1\nPeriod         : 7\n",tt.atomic);
        printf("Symbol         : Fr\nName           : Francium\nAtomic Mass    : 223 (g/mol)\n\n");
        printf("Details        : An intensely radioactive metal.Francium has no uses, having a half life of only 22 minutes.Francium has no known biological role. It is toxic due to its radioactivity.Francium is obtained by the neutron bombardment of radium in a nuclear reactor. It can also be made by bombarding thorium with protons.\n\n");
        break;
     case(88):
        printf("\nAtomic number  : %d\nGroup          : 2\nPeriod         : 7\n",tt.atomic);
        printf("Symbol         : Ra\nName           : Radium\nAtomic Mass    : 226.0254 (g/mol)\n\n");
        printf("Details        : A soft, shiny and silvery radioactive metal.Radium now has few uses, because it is so highly radioactive.Radium-223 is sometimes used to treat prostate cancer that has spread to the bones. Because bones contain calcium and radium is in the same group as calcium, it can be used to target cancerous bone cells. It gives off alpha particles that can kill the cancerous cells.Radium used to be used in luminous paints, for example in clock and watch dials. Although the alpha rays could not pass through the glass or metal of the watch casing, it is now considered to be too hazardous to be used in this way.\n\n");
        break;
     case(89):
        printf("\nAtomic number  : %d\nGroup          : f-block(Actinide Series)\nPeriod         : 7\n",tt.atomic);
        printf("Symbol         : Ac\nName           : Actinium\nAtomic Mass    : 227.0278 (g/mol)\n\n");
        printf("Details        : Actinium is a soft, silvery-white radioactive metal. It glows blue in the dark because its intense radioactivity excites the air around it.Actinium is a very powerful source of alpha rays, but is rarely used outside research.Actinium used for research purposes is made by the neutron bombardment of radium-226. Actinium also occurs naturally in uranium ores.\n\n");
        break;
     case(90):
        printf("\nAtomic number  : %d\nGroup          : f-block(Actinide Series)\nPeriod         : 7\n",tt.atomic);
        printf("Symbol         : Th\nName           : Thorium\nAtomic Mass    : 232.0381 (g/mol)\n\n");
        printf("Details        : A weakly radioactive, silvery metal.Thorium is an important alloying agent in magnesium, as it imparts greater strength and creep resistance at high temperatures. Thorium oxide is used as an industrial catalyst.Thorium can be used as a source of nuclear power. It is about three times as abundant as uranium and about as abundant as lead, and there is probably more energy available from thorium than from both uranium and fossil fuels. India and China are in the process of developing nuclear power plants with thorium reactors, but this is still a very new technology.Thorium dioxide was formerly added to glass during manufacture to increase the refractive index, producing thoriated glass for use in high-quality camera lenses.\n\n");
        break;
     case(91):
        printf("\nAtomic number  : %d\nGroup          : f-block(Actinide Series)\nPeriod         : 7\n",tt.atomic);
        printf("Symbol         : Pa\nName           : Protactinium\nAtomic Mass    : 231.0359 (g/mol)\n\n");
        printf("Details        : A silvery, radioactive metal.Protactinium is little used outside of research.Protactinium has no known biological role. It is toxic due to its radioactivity.\n\n");
        break;
     case(92):
        printf("\nAtomic number  : %d\nGroup          : f-block(Actinide Series)\nPeriod         : 7\n",tt.atomic);
        printf("Symbol         : U\nName           : Uranium\nAtomic Mass    : 238.029 (g/mol)\n\n");
        printf("Details        : A radioactive, silvery metal.Uranium is a very important element because it provides us with nuclear fuel used to generate electricity in nuclear power stations. It is also the major material from which other synthetic transuranium elements are made.Naturally occurring uranium consists of 99%% uranium-238 and 1%%uranium-235. Uranium-235 is the only naturally occurring fissionable fuel (a fuel that can sustain a chain reaction). Uranium fuel used in nuclear reactors is enriched with uranium-235. The chain reaction is carefully controlled using neutron-absorbing materials. The heat generated by the fuel is used to create steam to turn turbines and generate electrical power.In a breeder reactor uranium-238 captures neutrons and undergoes negative beta decay to become plutonium-239. This synthetic, fissionable element can also sustain a chain reaction.Uranium is also used by the military to power nuclear submarines and in nuclear weapons.Depleted uranium is uranium that has much less uranium-235 than natural uranium. It is considerably less radioactive than natural uranium. It is a dense metal that can be used as ballast for ships and counterweights for aircraft. It is also used in ammunition and armour.\n\n");
        break;
     case(93):
        printf("\nAtomic number  : %d\nGroup          : f-block(Actinide Series)\nPeriod         : 7\n",tt.atomic);
        printf("Symbol         : Np\nName           : Neptunium\nAtomic Mass    : 237.0482 (g/mol)\n\n");
        printf("Details        : A radioactive metal.Neptunium is little used outside research. The isotope neptunium-237 has been used in neutron detectors.Neptunium is obtained as a by-product from nuclear reactors. It is extracted from the spent uranium fuel rods. Trace quantities occur naturally in uranium ores.\n\n");
        break;
     case(94):
        printf("\nAtomic number  : %d\nGroup          : f-block(Actinide Series)\nPeriod         : 7\n",tt.atomic);
        printf("Symbol         : Pu\nName           : Plutonium\nAtomic Mass    : 242 (g/mol)\n\n");
        printf("Details        : A radioactive, silvery metal.Plutonium was used in several of the first atomic bombs, and is still used in nuclear weapons. The complete detonation of a kilogram of plutonium produces an explosion equivalent to over 10,000 tonnes of chemical explosive.Plutonium is also a key material in the development of nuclear power. It has been used as a source of energy on space missions, such as the Mars Curiosity Rover and the New Horizons spacecraft on its way to Pluto.\n\n");
        break;
     case(95):
        printf("\nAtomic number  : %d\nGroup          : f-block(Actinide Series)\nPeriod         : 7\n",tt.atomic);
        printf("Symbol         : Am\nName           : Americium\nAtomic Mass    : 243 (g/mol)\n\n");
        printf("Details        : Americium is a silvery, shiny radioactive metal.Americium is commonly used in smoke alarms, but has few other uses.It has the potential to be used in spacecraft batteries in the future. Currently plutonium is used but availability is poor so alternatives are being considered.It is of interest as part of the decay sequence that occurs in nuclear power production.\n\n");
        break;
     case(96):
        printf("\nAtomic number  : %d\nGroup          : f-block(Actinide Series)\nPeriod         : 7\n",tt.atomic);
        printf("Symbol         : Cm\nName           : Curium\nAtomic Mass    : 247 (g/mol)\n\n");
        printf("Details        : A radioactive metal that is silver in colour. It tarnishes rapidly in air.Curium has been used to provide power to electrical equipment used on space missions.Curium has no known biological role. It is toxic due to its radioactivity.\n\n");
        break;
     case(97):
        printf("\nAtomic number  : %d\nGroup          : f-block(Actinide Series)\nPeriod         : 7\n",tt.atomic);
        printf("Symbol         : Bk\nName           : Berkelium\nAtomic Mass    : 247 (g/mol)\n\n");
           printf("Details        : Berkelium is a radioactive, silvery metal.Because it is so rare, berkelium has no commercial or technological use at present.Less than a gram of berkelium is made each year. It is made in nuclear reactors by the neutron bombardment of plutonium-239.\n\n");
        break;
     case(98):
        printf("\nAtomic number  : %d\nGroup          : f-block(Actinide Series)\nPeriod         : 7\n",tt.atomic);
        printf("Symbol         : Cf\nName           : Californium\nAtomic Mass    : 251 (g/mol)\n\n");
        printf("Details        : Californium is a radioactive metal.Californium is a very strong neutron emitter. It is used in portable metal detectors, for identifying gold and silver ores, to identify water and oil layers in oil wells and to detect metal fatigue and stress in aeroplanes.Californium did not exist in weighable amounts until ten years after its discovery. It is prepared, in milligram amounts only, by the neutron bombardment of plutonium-239.\n\n");
        break;
     case(99):
        printf("\nAtomic number  : %d\nGroup          : f-block(Actinide Series)\nPeriod         : 7\n",tt.atomic);
        printf("Symbol         : Es\nName           : Einsteinium\nAtomic Mass    : 252 (g/mol)\n\n");
        printf("Details        : A radioactive metal, only a few milligrams of which are made each year.Einsteinium has no uses outside research.Einsteinium can be obtained in milligram quantities from the neutron bombardment of plutonium in a nuclear reactor.\n\n");
        break;
     case(100):
        printf("\nAtomic number  : %d\nGroup          : f-block(Actinide Series)\nPeriod         : 7\n",tt.atomic);
        printf("Symbol         : Fm\nName           : Fermium\nAtomic Mass    : 257 (g/mol)\n\n");
        printf("Details        : A radioactive metal obtained only in microgram quantities.Fermium has no uses outside research.Fermium has no known biological role. It is toxic due to its radioactivity.\n\n");
        break;
     case(101):
        printf("\nAtomic number  : %d\nGroup          : f-block(Actinide Series)\nPeriod         : 7\n",tt.atomic);
        printf("Symbol         : Md\nName           : Mendelevium\nAtomic Mass    : 258 (g/mol)\n\n");
        printf("Details        : A radioactive metal, of which only a few atoms have ever been created.Mendelevium is used only for research.Mendelevium has no known biological role.\n\n");
        break;
     case(102):
        printf("\nAtomic number  : %d\nGroup          : f-block(Actinide Series)\nPeriod         : 7\n",tt.atomic);
        printf("Symbol         : No\nName           : Nobelium\nAtomic Mass    : 259.1010 (g/mol)\n\n");
        printf("Details        : Nobelium is a radioactive metal. Only a few atoms have ever been made. Its half-life is only 58 minutes.Nobelium has no uses outside research.Nobelium has no known biological role. It is toxic due to its radioactivity.Nobelium is made by bombarding curium with carbon in a device called a cyclotron.\n\n");
        break;
     case(103):
        printf("\nAtomic number  : %d\nGroup          : 3\nPeriod         : 7\n",tt.atomic);
        printf("Symbol         : Lr\nName           : Lawrencium\nAtomic Mass    : 262.1097 (g/mol)\n\n");
        printf("Details        : A radioactive metal of which only a few atoms have ever been created.Lawrencium has no uses outside research.Lawrencium has no known biological role.Lawrencium does not occur naturally. It is produced by bombarding californium with boron.\n\n");
        break;
     case(104):
        printf("\nAtomic number  : %d\nGroup          : 4\nPeriod         : 7\n",tt.atomic);
        printf("Symbol         : Rf\nName           : Rutherfordium\nAtomic Mass    : 261.1088 (g/mol)\n\n");
        printf("Details        : A radioactive metal that does not occur naturally. Relatively few atoms have ever been made.At present, it is only used in research.\n\n");
        break;
     case(105):
        printf("\nAtomic number  : %d\nGroup          : 5\nPeriod         : 7\n",tt.atomic);
        printf("Symbol         : Db\nName           : Dubnium\nAtomic Mass    : 262.1141 (g/mol)\n\n");
        printf("Details        : A highly radioactive metal, of which only a few atoms have ever been made.At present, it is only used in research.Dubnium does not occur naturally. It is a transuranium element created by bombarding californium-249 with nitrogen-15 nuclei.\n\n");
        break;
     case(106):
        printf("\nAtomic number  : %d\nGroup          : 6\nPeriod         : 7\n",tt.atomic);
        printf("Symbol         : Sg\nName           : Seaborgium\nAtomic Mass    : 266 (g/mol)\n\n");
        printf("Details        : A radioactive metal that does not occur naturally. Only a few atoms have ever been made.At present, it is only used in research.Seaborgium has no known biological role.\n\n");
        break;
     case(107):
        printf("\nAtomic number  : %d\nGroup          : 7\nPeriod         : 7\n",tt.atomic);
        printf("Symbol         : Bh\nName           : Bohrium\nAtomic Mass    : 264 (g/mol)\n\n");
        printf("Details        : Bohrium is a highly radioactive metal.At present, bohrium is of research interest only.Bohrium has no known biological role.Bohrium does not occur naturally and only a few atoms have ever been made. It will probably never be isolated in observable quantities. It was created by the so-called 'cold fusion' method. This involved the bombardment of bismuth with atoms of chromium.\n\n");
        break;
     case(108):
        printf("\nAtomic number  : %d\nGroup          : 8\nPeriod         : 7\n",tt.atomic);
        printf("Symbol         : Hs\nName           : Hassium\nAtomic Mass    : 269 (g/mol)\n\n");
        printf("Details        : A highly radioactive metal, of which only a few atoms have ever been made.At present it is only used in research.Hassium has no known biological role.Hassium does not occur naturally and it will probably never be isolated in observable quantities. It is created by bombarding lead with iron atoms.\n\n");
        break;
     case(109):
        printf("\nAtomic number  : %d\nGroup          : 9\nPeriod         : 7\n",tt.atomic);
        printf("Symbol         : Mt\nName           : Meitnerium\nAtomic Mass    : 278 (g/mol)\n\n");
        printf("Details        : A highly radioactive metal, of which only a few atoms have ever been made.A highly radioactive metal, of which only a few atoms have ever been made.Meitnerium has no known biological role.Fewer than 10 atoms of meitnerium have ever been made, and it will probably never be isolated in observable quantities. It is made by bombarding bismuth with iron atoms.\n\n");
        break;
     case(110):
        printf("\nAtomic number  : %d\nGroup          : 10\nPeriod         : 7\n",tt.atomic);
        printf("Symbol         : Ds\nName           : Darmstadtium\nAtomic Mass    : 281 (g/mol)\n\n");
        printf("Details        : A highly radioactive metal, of which only a few atoms have ever been made.At present, it is only used in research.Darmstadtium has no known biological role.A man-made element of which only a few atoms have ever been created. It that is formed by fusing nickel and lead atoms in a heavy ion accelerator.\n\n");
        break;
     case(111):
        printf("\nAtomic number  : %d\nGroup          : 11\nPeriod         : 7\n",tt.atomic);
        printf("Symbol         : Rg\nName           : Roentgenium\nAtomic Mass    : 272 (g/mol)\n\n");
        printf("Details        : A highly radioactive metal, of which only a few atoms have ever been made.At present, it is only used in research.Roentgenium has no known biological role.A man-made element of which only a few atoms have ever been created. It is made by fusing nickel and bismuth atoms in a heavy ion accelerator.\n\n");
        break;
     case(112):
        printf("\nAtomic number  : %d\nGroup          : 12\nPeriod         : 7\n",tt.atomic);
        printf("Symbol         : Cn\nName           : Copernicium\nAtomic Mass    : 285 (g/mol)\n\n");
        printf("Details        : A highly radioactive metal, of which only a few atoms have ever been made. It is thought to be unreactive and more like a noble gas than a metal.At present, it is only used in research.It has no known biological role.Copernicium is a man-made element of which only a few atoms have ever been made. It is formed by fusing lead and zinc atoms in a heavy ion accelerator.\n\n");
        break;
     case(113):
        printf("\nAtomic number  : %d\nGroup          : 13\nPeriod         : 7\n",tt.atomic);
        printf("Symbol         : Nh\nName           : Nihonium\nAtomic Mass    : 286 (g/mol)\n\n");
        printf("Details        : A highly radioactive metal, of which only a few atoms have ever been made.At present, it is only used in research.It has no known biological role.\n\n");
        break;
     case(114):
        printf("\nAtomic number  : %d\nGroup          : 14\nPeriod         : 7\n",tt.atomic);
        printf("Symbol         : Fi\nName           : Flerovium\nAtomic Mass    : 289 (g/mol)\n\n");
        printf("Details        : A highly radioactive metal, of which only a few atoms have ever been made.At present, it is only used in researcIt has no known biological role.Flerovium can be formed in nuclear reactors.\n\n");
        break;
     case(115):
        printf("\nAtomic number  : %d\nGroup          : 15\nPeriod         : 7\n",tt.atomic);
        printf("Symbol         : Mc\nName           : Moscovium\nAtomic Mass    : 290 (g/mol)\n\n");
        printf("Details        : A highly radioactive metal, of which only a few atoms have ever been made.At present, it is only used in research.It has no known biological role.\n\n");
        break;
     case(116):
        printf("\nAtomic number  : %d\nGroup          : 16\nPeriod         : 7\n",tt.atomic);
        printf("Symbol         : Lv\nName           : Livermorium\nAtomic Mass    : 293 (g/mol)\n\n");
        printf("Details        : A highly radioactive metal, of which only a few atoms have ever been made.At present, it is only used in research.It has no known biological role.Livermorium does not occur naturally. It is made by bombarding curium atoms with calcium. The most stable isotope has a half-life of about 53 milliseconds.\n\n");
        break;
     case(117):
        printf("\nAtomic number  : %d\nGroup          : 17\nPeriod         : 7\n",tt.atomic);
        printf("Symbol         : TS\nName           : Tennessine\nAtomic Mass    : 294 (g/mol)\n\n");
        printf("Details        : A highly radioactive metal, of which only a few atoms have ever been made.At present, it is only used in research.It has no known biological role.\n\n");
        break;
     case(118):
        printf("\nAtomic number  : %d\nGroup          : 18\nPeriod         : 7\n",tt.atomic);
        printf("Symbol         : Og\nName           : Oganesson\nAtomic Mass    : 294 (g/mol)\n\n");
        printf("Details        : A highly radioactive metal, of which only a few atoms have ever been made.At present, it is only used in research.It has no known biological role. It was first synthesized in 2002 at the Joint Institute for Nuclear Research (JINR) in Dubna, near Moscow, Russia, by a joint team of Russian and American scientists.\n\n");
        break;

    default:
            printf("Invalid Element!\n");
            break;
    }
    }




    return num;
}

int finishing(num)
{

     int i;
    for(i=0;i<3;i++)
    {
        system("cls");
        printf("Exiting program.\n");

        usleep(100000);// usleep use microsecond (1 second = 1*10^6 microsecond)
                       // sleep use second
        system("cls");
        printf("Exiting program..\n");

        usleep(100000);

        system("cls");
        printf("Exiting program...\n");

        usleep(100000);

        system("cls");
        printf("Exiting program....\n");


        sleep(2);
    }

    system("cls");
    int a,j,p=0;
    char s[]="Thank You";
    for(a=0;a<29;a++)
    {
       system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\n\n");
        for(j=0;j<=p;j++)
        {
            printf("  ");
        }
        printf("%s\n",s);
        p++;//a=0 jonno 0 to 0 one time,a=1 0 to 1  two time.system("cls") er joono ager gulo show korbe na
        usleep(100000);

    }

    return num;
}


int main()
{
    struct table tt;
   int num;
//  char continue_choice; //use struct

   do{
       num=mainpage(); // mainpage aa number return korbe.//1//2//3

        switch(num){
        case 1:
             system("cls"); // It is used to Hide the Previous entries.
            interface(num); // saved period file here
            break;
        case 2:
             system("cls");
            searchelement(num); // element details
            break;
        case 3:
            //printf("Exiting program... \n");
            finishing(num);
            break;
        default:
            printf("Invalid Number!\n");
            break;
        }

        if(num!=3)
        {
            printf("Do you want to continue? (y/n): ");
            fflush(stdin);
            scanf("%c",&tt.continue_choice);//jotokkhon y dichhi loop cholte thakbe and n hole break korbe.
            if(tt.continue_choice=='n')
            {
                finishing(num);
                break;
            }
        }

     }while(num!=3);



    getch();
     return 0;
}
