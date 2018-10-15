# CLASS: Cosmic Linear Anisotropy Solving System

## Venadito Cósmico version
#### A five-parameter Dark Energy Parameterization 

Venadito cósmico is a flexible equation-of-state (EoS) w(z) and w(a) that tries to parametrize the behavior of Dark Energy at close and medium redshifts. The equation can be expanded from a 2-parameter eq. (N=1) to a 5 parameter eq. (N=4) and is also reducible to Lambda-CDM model (i.e. w=-1) with N=0. It is to be tested using CLASS + MontePython codes using BAO, SNa, H(z) and Planck datasets.

##### Software and code in use:

- [CLASS 2.6.3](https://github.com/lesgourg/class_public)
- [MontePython 2.2.2](https://monte-python.readthedocs.io/en/latest/index.html)
- Wolfram Mathematica
- Intel Fortran Compiler
- Open MPI
- Python
- and ImageMagick for .pdf -> .png conversions

The purpose of the following images is to link the scientific research being conducted, with the cosmogonic understanding of the Universe (Tututzi Maxa Kwaxi) of the meso-american Waixarika (Huichol) culture in pre-hispanic Mexico. Not just as an aesthetic analogy between numbers (N=1,2,3,4) and deities (Sun, Eagle, Deer and Peyote) / (Tayau, Tatei Wexica Wimari, Tamatzi Kauyumari and Hikuri) but as a test of reconciliation between the scientific work and the mithological tradition; two disciplines that appear to be antagonistic but may coexist peacefully and nourish from each other, making the scientific labour a more humane and diverse activity.

This is a work in progress.

### A. The Myth of the origin of the Universe according to Wixarika culture

<img src="venadito.jpeg" height="400" width="400" align="middle" alt="el universo"> <img src="universo.jpg" height="400" align="middle">

#### El universo:
  - Bisabuelo Cola de Venado: El Universo (Tututzi Maxa Kwaxi)
  - Abuela Tierra (Tukutzi Nakawe)
  - Abuelo Fuego (Nairy / Tatewari)
  - Padre Sol (Tayau)
  - El Hermano Venado (Tamatzi Kauyumari) (a)
  - Madre Águila (b)
  - Corazón y Plumas de Águila (c,d)
  - Abuela Tierra (imágen de la Tierra) (Tukutzi Nakawe) (e)
  - Halcón (Piwa'mi) (f)
  - Biznaga de Peyote (Hikuri) (g)

#### Serán simbolizados de la siguiente manera:
  - El Universo con el nombre Kwaxi ó Kwari y con el número N=0
    - equivalente a modelo Lambda-CDM
  - El Sol a través de un escudo u "Ojo del Sol": Nearika/Nierika y con el número N=1
    - equivalente a modelo w-CDM ó CPL
  - El Águila con el nombre Wimari y el número N=2
    - parametrización con 3 parámetros
  - El Venado con el nombre Kauyumari y el número N=4
    - parametrización con 5 parámetros

<p>
<img src="img-2.jpg" height="200" align="middle">
</p>

<!--otra imagen (cuervo) en "https://i.pinimg.com/originals/68/0a/b0/680ab0766d762f58282bf73b42b1a20b.jpg"-->

### B. The pictographical results so far...

<p>
<h4> 1. Temperature Cl of w(N=1) vs CPL parametrizations, computed with CLASS 2</h4>
<img src="comparison1.jpg" align="middle" height="600">
</p>


<p>
<h4> 2. A MontePython run in which parameters w0 and w1 are tested with data from:
  <ul>
  <li> Planck-Distance-Prior (background)
  <li> JLA
  </ul>
</h4>

<h5> 2.1 Run on Laptop with 4 cores and 5000 steps </h5>
<img src="w0wa.png" align="middle" height="600">

<h5> 2.2 Run on cluster with 16 cores and 20,000 steps </h5>
<img src="atocatl1.png" align="middle" height="600">
</p>

*************************************************************************
## Claudio Nahmad Arcaraz | 2018
#### BSc. Thesis at Instituto de Física UNAM for physics bachelor's degree
  - Check out more on the thesis work [here](https://github.com/ClaudioNahmad/thesis_BSc)
  - Check out the montepython repository of this work [here](https://github.com/ClaudioNahmad/montepython-venadito)
  - Check out more on installing the required tools for cosmological parameter exploration [here](https://github.com/ClaudioNahmad/Servicio-Social)
